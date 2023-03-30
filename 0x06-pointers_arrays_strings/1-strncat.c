#include "main.h"

char *_strncat(char *dest, const char *src, size_t n) {
    char *dest_start = dest;
    size_t dest_len = strlen(dest);
    size_t i;

    // Advance dest pointer to the end of the string
    dest += dest_len;

    // Copy at most n characters from src to dest
    for (i = 0; i < n && *src != '\0'; i++) {
        *dest++ = *src++;
    }

    // Null-terminate the resulting string
    *dest = '\0';

    return dest_start;
}
