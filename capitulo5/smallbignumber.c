/*Crear un programa que verifique cual es el numero mas pequeño y el mas grande, 
de 4 numeros enteros que el usuario introduzca*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, mayor1, menor1, menor2, mayor2, mayor, menor; //number 1, 2, 3, 4

    printf("Introduce 4 numeros enteros separados por un espacio:");

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        mayor1 = n1; //n1 es grande
        menor1 = n2; //n2 es menor
    }
    else
    {
        menor1 = n1; //n1 es menor
        mayor1 = n2; //n2 es mayor
    }
    if (n3 > n4)
    {
        mayor2 = n3;
        menor2 = n4;

    }
    else
    {
        menor2 = n3;
        mayor2 = n4;
    }

    if (mayor1 > mayor2)
        mayor = mayor1;
    else
    {
        mayor = mayor2;
    }
    if (menor1 > menor2)
    {
        menor = menor2;
    }
    else
    {
        menor = menor1;
    }

    printf("Mayor: %d", mayor);
    printf("\nMenor: %d", menor);

    return 0;
}
    