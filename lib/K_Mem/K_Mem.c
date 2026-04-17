#include <stdio.h>
#include <stdlib.h>

void ret() {
    // Stack Segment
    int local_var = 20;
}

// Initialized Data Segment: Global Variables
int globalVar = 10;
char message[] = "Hello";

// Uninitialized Data Segment: Global Variables
int unGlobal;
char unMessage[50];

int main(void) {
    
    // Initialize Data Segment: Static Variables
    static int staticVar = 20;

    // Uninitialized Data Segment: Static Variables
    static int unStatic;

    // Assigning values at runtime
    unGlobal = 10;
    unStatic = 20;

    // Heap Segment
    int *ptr = (int*) malloc(sizeof(int) * 10);

    // Stack Segment
    int local_var = 10;

    return 0;
}
