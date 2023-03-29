#include "main.h"

#include <stdio.h>
#include <string.h>

void puts_half(char *str) {
    int len = strlen(str);
    int start_index = len / 2;
    if (len % 2 == 1) {
        start_index = (len - 1) / 2;
    }
    for (int i = start_index; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
