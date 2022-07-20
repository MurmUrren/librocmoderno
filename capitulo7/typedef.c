#include <stdio.h>

typedef float Calificaciones;

int main(void)
{
    Calificaciones alumno[] = {92.45, 94.42, 75.567};

    for(int i = 1; i <= 3; i++)
    {
        printf("Calificaciones\nAlumno #%d: %f \n", i, alumno[i - 1]);
    }

    
}