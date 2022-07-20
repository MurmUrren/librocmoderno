/*
Write a program that calculates how many digits a number contains:
Enter a number: 374
The number 374 has 3 digits
*/

#include <stdio.h>

int main(void)
{
    int numero;

    printf("Introduce un numero que no tenga mas de 4 digitos: ");
    scanf("%d", &numero);

    if (numero < 10 && numero > -10)
    {
        printf("Tu numero tiene 1 digito");
    }
    else if (numero < 100 && numero > -100)
    {
        printf("Tu numero tiene 2 digitos");
    }
    else if (numero < 1000 && numero > -1000)
    {
        printf("Tu numero tiene 3 digitos");
    }
    else if (numero < 10000 && numero > -10000)
    {
        printf("Tu numero tiene 4 digitos");
    }
    else
    {
        printf("Tu numero tiene mas de 4 digitos, pero este programa no puede calcularlo :C");
    }
    return 0;
}