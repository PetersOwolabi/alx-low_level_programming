#include <stdio.h>
#include <math.h>

int main(void)
{
    long int n = 612852475143;
    long int i;

    // divide n by 2 as many times as possible
    while (n % 2 == 0) {
        n /= 2;
    }

    // check odd numbers up to the square root of n
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n /= i;
        }
    }

    // if n is still greater than 2, it must be a prime factor
    if (n > 2) {
        printf("%ld\n", n);
    }

    return 0;
}

