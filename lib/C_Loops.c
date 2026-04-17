#include <stdio.h>

int main(void) {
    // for + array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int key = 3;
    int size = 6;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at position: %d\n", (i+1));
            break;
        }
    }
    // for + continue
    for (int j = 1; j <= 10; j++) {
        if (j == 6) {
            continue;
        } else {
            printf("%d\n", j);
        }
    }
    // goto + label
    int n = 1;
label:
    printf("%d ", n);
    n++;
    if (n <= 10) {
        goto label;
    } printf("\n");
    // while
    int k = 1;
    while (k <= 10) {
        printf("%d\n", k);
        k++;
    }
    // do + while
    int l = 1;
    do {
        printf("%d\n", l);
        l++;
    } while (l <= 10);

    return 0;
}
