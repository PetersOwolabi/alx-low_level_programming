#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
    if (a == NULL) { // if array is NULL, just return
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) { // add comma and space for all elements except the last one
            printf(", ");
        }
    }

    printf("\n"); // add a new line at the end
}
