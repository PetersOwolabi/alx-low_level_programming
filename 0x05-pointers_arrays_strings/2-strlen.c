#include "main.h"

int _strlen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

int main() {
    char str[] = "Hello, world!";
    int length = _strlen(str);
    printf("The length of '%s' is %d.\n", str, length);
    return 0;
}
