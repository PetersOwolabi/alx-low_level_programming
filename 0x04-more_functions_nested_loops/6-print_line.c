#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_line(int n) {
    if (n > 0) {
        int i;
        for (i = 0; i < n; i++) {
            _putchar('_');
        }
    }
    _putchar('\n');
}

