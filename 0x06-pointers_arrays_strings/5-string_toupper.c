#include "main.h"

char *string_toupper(char *str) {
    char *p = str;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 32;
        }
        p++;
    }
    return str;
}
