#include <stdio.h>
#include <string.h>

int main(void) {
    
    char str[] = "Geeks";
    char *ptr = str;

    printf("%sForGeeks\n", str);
    printf("char 1 = %c\n", str[0]);
    
    str[0] = 'R';
    printf("New char 1 = %c\n", str[0]);

    printf("String Length: %zu\n", strlen(str));

    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++;
    }

    const char *str_lit = "Hello, World!";
    printf("%s\n", str_lit);

    return 0;
}
