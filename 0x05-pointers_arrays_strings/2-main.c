#include "main.h"

int _strlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int main() {
    char str[] = "Hello, world!";
    int len = _strlen(str);
    printf("Length of string: %d\n", len);
    return 0;
}
