/* Write a program that computes the volume of a sphere with a 10-meter radius, using the formula
v = 4/3pir^3 Write the fraction 4/3 as 4.Of/3.Of (Try writing it as 4 / 3 . What happens?)
Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself
twice to compute r^3. */

#define PI 3.1416 //definir valor de la constante PI
#include <stdio.h>

int main(void)
{
    float radio;
    float volumen;

    printf("Introduce el radio(en metros) de la esfera: ");
    scanf("%f", &radio);

    volumen = (4.0f/3.0f) * PI * radio * radio * radio;

    printf("\nRadio de la esfera: %.2f metros", radio);
    printf("\nVolumen de la esfera: %.2f", volumen);

    return 0;
}