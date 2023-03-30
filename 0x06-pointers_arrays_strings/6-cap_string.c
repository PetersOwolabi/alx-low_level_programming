#include "main.h"

#include <ctype.h> /* for toupper */

char *cap_string(char *str) {
    char *p = str;
    int cap_next = 1;
    while (*p != '\0') {
        if (cap_next && islower(*p)) {
            *p = toupper(*p);
        }
        cap_next = isspace(*p) || *p == ',' || *p == ';' || *p == '.' ||
                   *p == '!' || *p == '?' || *p == '"' || *p == '(' ||
                   *p == ')' || *p == '{' || *p == '}';
        p++;
    }
    return str;
}
