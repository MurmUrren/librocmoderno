/* Computes a Universal Product Code check digit
V2, you can just enter the all the digits instead of differents */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int d, i1, i2 , i3, i4 , i5, i6, j1, j2, j3, j4, j5,
    first_sum, second_sum, total;

    printf("Enter the 11 digits(excluding the 12th one): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    
    printf ("Check digit: %d\n", 9 - ((total - 1) % 10)) ;

    return 0;

}

