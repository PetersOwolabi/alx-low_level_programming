#include "main.h"

int _atoi(char *s)
{
    int res = 0;    // Initialize result
    int sign = 1;   // Initialize sign as positive
    int i = 0;      // Initialize index of first digit in string

    // If string is empty, return 0
    if (s[0] == '\0') {
        return 0;
    }

    // Ignore all leading white spaces
    while (s[i] == ' ') {
        i++;
    }

    // Check for sign (+ or -)
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // Calculate integer value
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9') {
        // Check for integer overflow
        if (res > (INT_MAX - (s[i] - '0')) / 10) {
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }
        res = res * 10 + (s[i] - '0');
        i++;
    }

    // Return final result with sign
    return sign * res;
}
