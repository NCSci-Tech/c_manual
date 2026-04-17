#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
 
    int x = 100;
    int *xp = &x;

    printf("%d\n%p\n%d\n%p\n", x, &x, *xp, xp);

    int a = 10; int b = 20;
    swap(&a, &b);
    
    printf("A = %d\nB = %d\n", a, b);

    printf("ptr size: %zu\n", sizeof(xp));
    
    return 0;
}
