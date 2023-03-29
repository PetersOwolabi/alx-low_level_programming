#include "main.h"

#include <string.h>

void rev_string(char *s) {
    int len = strlen(s);   // get the length of the string
    int i, j;
    char temp;

    // swap characters from the beginning and end of the string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
