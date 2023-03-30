#include "main.h"

char *_strncpy(char *dest, const char *src, size_t n) {
    char *dest_start = dest;
    size_t i;

    // Copy at most n characters from src to dest
    for (i = 0; i < n && *src != '\0'; i++) {
        *dest++ = *src++;
    }

    // If n is greater than the length of src, pad with null characters
    for (; i < n; i++) {
        *dest++ = '\0';
    }

    return dest_start;
}
