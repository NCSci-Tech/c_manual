#include <stdio.h>
#include <stdlib.h>

int main(void) {    

    int *ptr = (int*)malloc(20);
    if (ptr == NULL) {
        printf("Allocation Failed!\n");
        exit(0);
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i+1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    int *ptr2 = (int *)malloc(sizeof(int)*5);
    if (ptr2 == NULL) {
        printf("Allocation Two Failed!");
        exit(0);
    }

    for (int j = 0; j < 5; j++) {
        ptr2[j] = j+1;
    }
    for (int k = 0; k < 5; k++) {
        printf("%d\n", ptr2[k]);
    }

    return 0;
}
