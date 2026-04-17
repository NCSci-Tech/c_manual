#include <stdio.h>

int main(void) {
    
    char str[20];
    printf("Enter String: ");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    printf("Your String: %s", str);
    return 0;
}
