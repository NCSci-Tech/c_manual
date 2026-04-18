#include <stdio.h>
#include <stdlib.h>

char *getName();

int main(void) {

    char *name = getName();
    printf("Hello, %s!\n", name);

    return 0;
}

char *getName() {
    int capacity = 10;
    int length = 0;
    char *buffer = malloc(capacity * sizeof(char));
    int c;

    if (buffer == NULL) return NULL;

    printf("Enter name: ");
    while ((c = getchar()) != '\n' && c != EOF) {
        if (length + 1 >= capacity) {
            capacity *= 2;
            char *new_buffer = realloc(buffer, capacity * sizeof(char));
            if (new_buffer == NULL) {
                free(buffer);
                return NULL;
            }
            buffer = new_buffer;
        }
        buffer[length++] = (char)c;
    }
    buffer[length] = '\0';
    return buffer;
}
