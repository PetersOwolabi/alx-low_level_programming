#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1;
    r[k] = '\0'; // make sure the result string is null-terminated
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        if (k < 1 || (sum > 9 && k < 2)) { // check if result can be stored in r
            return 0;
        }
        carry = sum > 9 ? 1 : 0;
        r[k-1] = sum % 10 + '0';
        k--;
    }
    if (carry) {
        if (k < 1) { // check if result can be stored in r
            return 0;
        }
        r[k-1] = carry + '0';
    }
    return r + k;
}
