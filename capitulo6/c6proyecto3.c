/*
   Write a program that asks the user to enter a fraction,
   then reduces the fraction to lowest terms:
       Enter a fraction: 6/12
       In lowest terms: 1/2
   Hint: To reduce a fraction to lowest terms, first compute
   the GCD of the numerator and denominator. Then divide both
   the numerator and denominator by the GCD.

    Hint: The classic algorithm for computing the GCD, known as
   Euclid's algorithm, goes as follows:

   1. Let numerator and denominator be variables containing the two numbers.
   2. If denominator is 0, then stop: numerator contains the GCD.
   3. Otherwise, compute the remainder when numerator is divided by denominator.
   4. Copy denominator into numerator and copy the remainder into denominator.
   5. Repeat the process, starting with testing whether denominator is 0. 
*/

#include <stdio.h>

int main(void)
{
    int numerator, denominator, remainder, numCopy, denomCopy;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    numCopy = numerator;
    denomCopy = denominator;

    while (denomCopy != 0)
    {
        remainder = numCopy % denomCopy;
        numCopy = denomCopy;
        denomCopy = remainder;
    }

    printf("In lowest terms: %d/%d", numerator/numCopy, denominator/numCopy);


}