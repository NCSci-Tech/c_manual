#include <stdio.h>

union Student {
    int id;
    float gradeN;
    union {
        char gradeL;
    } performance;
};

int main(void) {

    union Student data1;

    data1.id = 1;
    printf("%d\n", data1.id);
    
    data1.gradeN = 98.87;
    printf("%.2f\n", data1.gradeN);
    
    data1.performance.gradeL = 'A';
    printf("%c\n", data1.performance.gradeL);

    return 0;
}
