#include "main.h"

void print_number(int n) {
    if (n < 0) { // handle negative numbers
        _putchar('-');
        n = -n;
    }
    if (n / 10) { // recursively print digits
        print_number(n / 10);
    }
    _putchar(n % 10 + '0'); // print last digit as a character
}
