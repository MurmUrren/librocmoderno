/*
Escribir un programa que convierta una hora en sistema de 24 horas a sistema de 12 horas.
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
*/

#include <stdio.h>

int main(void)
{
    int hora24, minutos;

    printf("Enter a 24-hour time in this format 'hour:min': ");
    scanf("%d : %d", &hora24, &minutos);

    if (hora24 > 12 && hora24 < 24)
    {
        printf("Son las %.2d:%.2d PM", (hora24 - 12), minutos);
    }
    else if (hora24 == 12)
    {
        printf("Son las %.2d:%.2d PM", hora24, minutos);
    }
    else if (hora24 == 24 && minutos >= 0)
    {
        printf("Son las %.2d:%.2d AM", (hora24 - 24), minutos);
    }
    else
    {
        printf("Son las %.2d:%.2d AM", hora24, minutos);
    }
    return 0;

}