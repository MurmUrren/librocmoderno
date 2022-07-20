/*Write a single expression whose value is either - 1 , 0 , o r + 1, depending on whether i is less
than , equal to , or greater than j , respectively. */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, j, expresion;

    printf("Introducir el valor de i: ");
    scanf("%d", &i);

    printf("Introducir el valor de j: ");
    scanf("%d", &j);
    
    if (i < j)
    {
        expresion = -1;
        printf("El resultado es %d.", expresion);
    }
    else if (i == j)
    {
        expresion = 0;
        printf("El resultado es %d.", expresion);
    }
    else if (i > j)
    {
        expresion = 1;
        printf("El resultado es %d.", expresion);
    }

    return 0;
}