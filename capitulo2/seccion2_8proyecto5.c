/* Write a program that asks the user to enter a value for x and then displays the value o f the
following polynomial:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Hint: C doesn't have an exponentiation operator, so you’ll need to multiply x by itself
repeatedly in order to compute the powers of x . (For example, x * x * x is x cubed.) */

#include <stdio.h>

int main(void)
{
    float x;

    printf("Funcion 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6");
    printf("\nIntroduce valor de x para la funcion: ");
    scanf("%f", &x);
    printf("El resultado es: %.2f", (3 * (x  * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    printf("\nEl resultado es: %.2f", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

/*Modify the program of Programming Project 5 so that the polynomial is evaluated using the
following formula:
((((3x + 2)x - 5)x - 1)x + 7)x - 6
Note that the modified program performs fewer multiplications. This technique for evaluating
polynomials is known as Horner's Rule.*/

}

