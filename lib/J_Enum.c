#include <stdio.h>

enum compass {
    NORTH, EAST, SOUTH, WEST
};

typedef enum direction {
    HIGH, LOW
} Dir;

int main(void) {
    
    enum compass dir1 = NORTH;
    printf("%d\n", dir1);

    dir1 = 3;
    printf("%d\n", dir1);

    Dir dir2 = HIGH;
    printf("%d\n", dir2);

    return 0;
}
