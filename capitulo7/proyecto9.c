/*
Write a program that asks the user for a 12-hour time,
   then displays the time in 24-hour form:
       Enter a 12-hour time: 9:11 PM
       Equivalent 24-hour time: 21:11
   See Programming Project 8 for a description of the
   input format.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char meridiem; //am or pm
    int hour, minutes;

    printf("\nEnter a 12-hour time (example 9:11 PM): ");
    scanf("%d : %d %c", &hour, &minutes, &meridiem);

    switch (toupper(meridiem))
    {
        case 'A':
            if (hour == 12)
            {
                hour -= 12;
            }
            break;
        case 'P':
            if(hour != 12)
            {
                hour += 12;
            }
            break;
        default:
            printf("Invalid entry, program will terminate.");
            return 0;
    }

    printf("Equivalen 24-hour time: %d:%.2d", hour, minutes);

    return 0;
}