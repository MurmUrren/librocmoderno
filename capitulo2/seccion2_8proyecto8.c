/*
Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
*/

#include <stdio.h>

int main(void)
{
    float valorDeuda, valorDeudaActual, tasaInteres, pagoMensual;

    printf("Ingresa la cantidad de la deuda: ");
    scanf("%f", &valorDeuda);
    printf("Ingresa la tasa de interes %%: ");
    scanf("%f", &tasaInteres);
    printf("Ingresa el pago mensual que realizaras: ");
    scanf("%f", &pagoMensual);
    valorDeudaActual = (valorDeuda - pagoMensual) + ((tasaInteres / 100 * valorDeuda) / 12);
    printf("Deuda restante despues del primer pago: %.2f", valorDeudaActual);
    valorDeudaActual = (valorDeudaActual - pagoMensual) + ((tasaInteres / 100 * valorDeudaActual) / 12);
    printf("\nDeuda restante despues del segundo pago: %.2f", valorDeudaActual);
    valorDeudaActual = (valorDeudaActual - pagoMensual) + ((tasaInteres / 100 * valorDeudaActual) / 12);
    printf("\nDeuda restante despues del tercer pago: %.2f", valorDeudaActual);

    return 0;
}