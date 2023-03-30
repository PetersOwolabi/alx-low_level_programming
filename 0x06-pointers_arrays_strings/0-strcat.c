#include "main.h"

char *_strncat(char *dest, char *src, int n) {
    char *p = dest + strlen(dest);
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        p[i] = src[i];
    }
    p[i] = '\0';
    return dest;
}
