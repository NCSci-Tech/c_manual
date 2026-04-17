#include <stdio.h>
#include "head.h"

void ret();

int main(void) {
    // Comment
    char name[4] = "Alex";
    int age = 23;
    printf("My name is %s and I am %d.\n", name, age);
    ret();
    printf("1 + 2 = %.2f\n", add(1, 2));
    return 0;
}

void ret() {
    printf("Hello, World\n");
}
