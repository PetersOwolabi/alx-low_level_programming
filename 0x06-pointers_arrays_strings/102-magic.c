#include "main.h"
#include <stdio.h>

int main(void) {
    int a[] = {97, 98, 99}; // a[0]=97, a[1]=98, a[2]=99
    int *p;
    p = &a[0]; // p points to a[0]
    p = p + 2; // p points to a[2] (pointer arithmetic)
    printf("a[2] = %d\n", *(p)); // print the value pointed by p, which is a[2]
    return 0;
}
