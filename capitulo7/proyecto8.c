/*
Modify Programming Project 8 from Chapter 5 so that the user
   enters a time using the 12-hour clock. The input will have the
   form hours:minutes followed by either A, P, AM or PM (either lower
   case or upper case). White space is allowed (but not required) 
   between the numerical time and the AM/PM indicator. Examples
   of valid input:
   1:15P
   1:15PM
   1:15p
   1:15pm
   1:15 P
   1:15 PM
   1:15 p
   1:15 pm
   You may assume that the input has one of these forms; there
   is no need to test for errors.
*/

#include <stdio.h>
#include <ctype.h>

typedef char Meridian;

int main(void)
{
    int tiempoHora, tiempoMinuto, tiempoConversion, vuelo1, vuelo2, vuelo3, vuelo4, vuelo5,
    vuelo6, vuelo7, vuelo8;
    Meridian am_pm;
    

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

    printf("\nEnter a 12-hour time: ");
    scanf("%d : %d %c",&tiempoHora, &tiempoMinuto, &am_pm);

    switch (toupper(am_pm))
    {
        case 'A':
            tiempoConversion = tiempoHora * 60 + tiempoMinuto;
            break;
        case 'P':
            tiempoConversion = (12 * 60) + ((tiempoHora - 12) * 60) + tiempoMinuto;
            break;
        default:
            printf("Enter a valid 12-hour time. Restart the program\n");
            return 0;
    }

    vuelo1 = 8 * 60; //480min
    vuelo2 = 9 * 60 + 43; //583min
    vuelo3 = 11 * 60 + 19; //679min
    vuelo4 = 12 * 60 + 47; //720min
    vuelo5 = 14 * 60; //840min
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
                printf("\n%d", tiempoConversion);                 
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
                printf("\n%d22", tiempoConversion); 
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