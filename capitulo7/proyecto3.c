/*
    Modify the sum2.c program of Section 7.1 to
   sum a series of double values.
*/

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("\nThis program sums a series of double floating points numbers.\n");
    printf("Enter double floating points numbers (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n\n", sum);

    return 0;
}