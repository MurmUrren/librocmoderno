/* Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:*/

#include <stdio.h>

int main(void)
{
    float dinero;

    printf("Introduce el precio del producto para calcular el precio final con taxes: ");
    scanf("%f", &dinero);
    printf("Precio final con taxes: $%.2f", (dinero + dinero * 0.05));

    return 0;
}