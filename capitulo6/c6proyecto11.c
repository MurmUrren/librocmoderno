/* 
   The value of the mathematical constant e can be 
   expressed as an infinite series:

   e = 1 + 1/1! + 1/2! + 1/3! + ...

   Write a program that approximates e by computing
   the value of

   1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

   where n is an integer entered by the user.
*/

#include <stdio.h>


int main(void)
{
    int n;
    float e = 1.0f, fact = 1.0f;

    printf("This program computes the approximate value of e:\n");
    printf("Please enter an integer value (1, 2, 3, 4, etc): ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        e += (1.0f/(fact));
        
        fact = 1;
    }

    printf("Value of e = %f", e);

    return 0;
}