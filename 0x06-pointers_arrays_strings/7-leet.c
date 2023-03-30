#include "main.h"

char *leet(char *str) {
    char *p = str;
    char leet_map[256] = {0};  // initialize the mapping to all zeros
    leet_map['a'] = leet_map['A'] = '4';
    leet_map['e'] = leet_map['E'] = '3';
    leet_map['o'] = leet_map['O'] = '0';
    leet_map['t'] = leet_map['T'] = '7';
    leet_map['l'] = leet_map['L'] = '1';

    while (*p != '\0') {
        if (leet_map[*p]) {
            *p = leet_map[*p];
        }
        p++;
    }
    return str;
}
