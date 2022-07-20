/* Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount : 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3 
*/

#include <stdio.h>

int main(void)
{
    int cantidadDineroInicial, cantidadDineroRepartir, billetes20, billetes10, billetes5, billetes1;
    printf("Cuanto dinero tienes: ");
    scanf("%d", &cantidadDineroInicial);
    cantidadDineroRepartir = cantidadDineroInicial;
    billetes20 = cantidadDineroRepartir / 20; // operacion para calcular cuantos billetes de 20 tenemos en el dinero que introduzcamos
    cantidadDineroRepartir = cantidadDineroRepartir - (billetes20 * 20); // se resta el dinero inicial con el dinero que tenemos en billetes de 20
    billetes10 = cantidadDineroRepartir / 10; // operacion para calcular cuantos billetes de 10 tenemos en el dinero que introduzcamos
    cantidadDineroRepartir = cantidadDineroRepartir - (billetes10 * 10); // se resta el dinero inicial con el dinero que tenemos en billetes de 10
    billetes5 = cantidadDineroRepartir / 5; // operacion para calcular cuantos billetes de 10 tenemos en el dinero que introduzcamos
    cantidadDineroRepartir = cantidadDineroRepartir - (billetes5 * 5); // se resta el dinero inicial con el dinero que tenemos en billetes de 5
    billetes1 = cantidadDineroRepartir; // operacion para calcular cuantos billetes de 10 tenemos en el dinero que introduzcamos

    printf("Tienes: $%d", cantidadDineroInicial);
    printf("\nRepartido en:\n%d billetes de $20\n%d billetes de $10\n%d billetes de $5\n%d billetes de 1$", billetes20, billetes10, billetes5, billetes1);

    return 0;
}