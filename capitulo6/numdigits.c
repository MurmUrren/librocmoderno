#include <stdio.h>
int main (void)
{
    int n, digits;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    digits = 0;

    do {
        n /= 10;
        digits++;
    } while (n > 0 );

    printf("The number has %d digit(s).\n" , digits);

    
    return 0;
}