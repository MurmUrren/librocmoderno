/* 
   Programming Project 8 in Chapter 2 asked you to write a
   program that calculates the remaining balance on a loan
   after the first, second, and third monthly payments.
   Modify the program so that it also asks the user to enter
   the number of payments and then displays the balance
   remaining after each of these payments.

*/

#include <stdio.h>

int main(void)
{
    float valorDeuda, valorDeudaActual, tasaInteres, pagoMensual, numPagos;

    printf("Ingresa la cantidad de la deuda: ");
    scanf("%f", &valorDeuda);

    printf("Ingresa la tasa de interes %%: ");
    scanf("%f", &tasaInteres);

    printf("Ingresa el pago mensual que realizaras: ");
    scanf("%f", &pagoMensual);

    printf("Ingresa numero de pagos que realizaras: ");
    scanf("%f", &numPagos);

    valorDeudaActual = (valorDeuda - pagoMensual) + ((tasaInteres / 100 * valorDeuda) / 12);
    printf("Deuda restante despues del pago #1: %.2f", valorDeudaActual);
    
    for(int i = 1; i <= numPagos; i++)
    {
        valorDeudaActual = (valorDeudaActual - pagoMensual) + ((tasaInteres / 100 * valorDeudaActual) / 12);
        printf("\nDeuda restante despues del pago #%d: %.2f", i + 1, valorDeudaActual);
    }

    return 0;
}