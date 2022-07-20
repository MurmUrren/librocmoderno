/*
 Write a program that prints the values of sizeof(int),
   sizeof(short), sizeof(long), sizeof(float), sizeof(double)
   and sizeof(long double).
*/

#include <stdio.h>

int main(void)
{
    printf("\nThis program will print the value of and int, short, long, float, double and long double.");
    printf("\nSize of int: %d bytes", sizeof(int));
    printf("\nSize of short: %d bytes", sizeof(short));
    printf("\nSize of long: %d bytes", sizeof(long));
    printf("\nSize of float: %d bytes", sizeof(float));
    printf("\nSize of double: %d bytes", sizeof(double));
    printf("\nSize of long double: %d bytes", sizeof(long double));

    return 0;
}