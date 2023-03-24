#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
    if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}
