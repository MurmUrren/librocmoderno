/*Programa que permite obtener el numero de control de un codigo de barras EAN 13*/

#include <stdio.h>

int main(void)
{
    int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11,
        sumaImpar, sumaPar, sumaTotal;
    
    printf("Introduzca el digito inicial: ");
    scanf("%1d", &i0);

    printf("Introduzca los seis digitos siguientes: ");
    scanf("%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6);
    
    printf("Introduzca los ultimos cinco digitos: ");
    scanf("%1d%1d%1d%1d%1d", &i7, &i8, &i9, &i10, &i11);

    sumaImpar = i1 + i3 + i5 + i7 + i9 + i11;
    sumaPar = i0 + i2 + i4 + i6 + i8 + i10;
    sumaTotal = (3 * sumaImpar) + sumaPar;

    printf("\nEl numero de control es: %d", 9 - (sumaTotal - 1) % 10);

    return 0;

}