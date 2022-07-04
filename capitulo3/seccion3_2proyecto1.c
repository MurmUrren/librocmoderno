/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays
it in the form yyyymmdd:
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
*/

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Introduce la fecha en formato mm/dd/yyyy: ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("La fecha es %d%d%d", year, month, day);

    return 0;
}