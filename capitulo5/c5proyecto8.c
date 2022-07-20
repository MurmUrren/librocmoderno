/*
The following table shows the daily flights from 
   one city to another:
   Departure time   Arrival time
   -----------------------------
    8:00 am         10:15 am
    9:43 am         11:52 am
   11:19 am          1:31 pm
   12:47 pm          3:00 pm
    2:00 pm          4:08 pm
    3:45 pm          5:55 pm
    7:00 pm          9:20 pm
    9:45 pm         11:58 pm

Write a program that asks user to enter a time
(expressed in hours and minutes, using the 24-hour
clock). The program then displays the departure and
arrival times for the flight whose departure time is
closest to that entered by the user:

       Enter a 24-hour time: 13:15
       Closest departure time is 12:47 pm, arriving at 3:00 pm

Hint: Convert the input into a time expressed in minutes
   since midnight, and compare it to the departure times, also
   expressed in minutes since midnight. For example, 13:15 is
   13 x 60 + 15 = 795 minutes since midnight, which is closer to
   12:47 pm (767 minutes since midnight) than to any of the
   other departure times.
*/

#include <stdio.h>

int main(void)
{
    int tiempoHora, tiempoMinuto, tiempoConversion, vuelo1, vuelo2, vuelo3, vuelo4, vuelo5,
    vuelo6, vuelo7, vuelo8;

    printf("Departure time\tArrival time");
    printf("\n-----------------------------\n");
    printf("8:00 am\t\t10:15 am\n");
    printf("9:43 am\t\t11:52 am\n");
    printf("11:19 am\t1:31 pm\n");
    printf("12:47 pm\t3:00 pm\n");
    printf("2:00 pm\t\t4:08 pm\n");
    printf("3:45 pm\t\t5:55 pm\n");
    printf("7:00 pm\t\t9:20 pm\n");
    printf("9:45 pm\t\t11:58 pm\n");

    printf("\nEnter a 24-hour time: ");
    scanf("%d : %d",&tiempoHora, &tiempoMinuto);

    tiempoConversion = tiempoHora * 60 + tiempoMinuto;
    vuelo1 = 8 * 60;
    vuelo2 = 9 * 60 + 43;
    vuelo3 = 11 * 60 + 19;
    vuelo4 = 12 * 60 + 47;
    vuelo5 = 14 * 60;
    vuelo6 = 15 * 60 + 45;
    vuelo7 = 19 * 60;
    vuelo8 = 21 * 60 + 45;

    if ((tiempoConversion >= 24 * 60 || tiempoConversion <= 0))
    {
        printf("Entrada invalida");
    }

    else 
    { 
        if (tiempoConversion >= 1 && tiempoConversion < vuelo1)
        {
            printf("Closest departure time is 8:00 am, arriving at 10:15 am");
        }
        else if (tiempoConversion >= vuelo1 && tiempoConversion < vuelo2)
        {
            if (vuelo2 - tiempoConversion < tiempoConversion - vuelo1 )
            {
                printf("Closest departure time is 9:43 am, arriving at 11:52 am");                  
            }
            else
            {
                printf("Closest departure time is 8:00 am, arriving at 10:15 am");  
            }  
        }
        else if (tiempoConversion >= vuelo2 && tiempoConversion < vuelo3)
        {
            if (vuelo3 - tiempoConversion < tiempoConversion - vuelo2 )
            {
                printf("Closest departure time is 11:19 am, arriving at 1:31 pm");     
            }
            else
            {
                printf("Closest departure time is 9:43 am, arriving at 11:52 am");
            }  
        }
        else if (tiempoConversion >= vuelo3 && tiempoConversion < vuelo4)
        {
            if (vuelo4 - tiempoConversion < tiempoConversion - vuelo3 )
            {
                printf("Closest departure time is 12:47 pm , arriving at 3:00 pm");     
            }
            else
            {
                printf("Closest departure time is 11:19 am, arriving at 1:31 pm");
            }  
        }
        else if (tiempoConversion >= vuelo4 && tiempoConversion < vuelo5)
        {
            if (vuelo5 - tiempoConversion < tiempoConversion - vuelo4 )
            {
                printf("Closest departure time is 2:00 pm , arriving at 4:08 pm");     
            }
            else
            {
                printf("Closest departure time is 12:47 pm , arriving at 3:00 pm");
            }  
        }
        else if (tiempoConversion >= vuelo5 && tiempoConversion < vuelo6)
        {
            if (vuelo6 - tiempoConversion < tiempoConversion - vuelo5 )
            {
                printf("Closest departure time is 3:45 pm , arriving at 5:55 pm");     
            }
            else
            {
                printf("Closest departure time is 2:00 pm , arriving at 4:08 pm");
            }  
        }
        else if (tiempoConversion >= vuelo6 && tiempoConversion < vuelo7)
        {
            if (vuelo7 - tiempoConversion < tiempoConversion - vuelo6 )
            {
                printf("Closest departure time is 7:00 pm , arriving at 9:20 pm");     
            }
            else
            {
                printf("Closest departure time is 3:45 pm , arriving at 5:55 pm"); 
            }  
        }
        else if (tiempoConversion >= vuelo7)
        {
            if (vuelo8 - tiempoConversion < tiempoConversion - vuelo7 )
            {
                printf("Closest departure time is 9:45 pm , arriving at 11:58 pm");     
            }
            else
            {
                printf("Closest departure time is 7:00 pm , arriving at 9:20 pm"); 
            }  
        }
    }
    
    return 0;
}