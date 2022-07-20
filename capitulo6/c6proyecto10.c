/*
Programming Project 9 in Chapter 5 asked you to write a 
   program that determines which of two dates come earlier
   on the calendar. Generalize the program so that the user
   may enter any number of dates. The user will enter 0/0/0
   to indicate that no more dates will be entered.
       Enter a date (mm/dd/yy): 3/6/08
       Enter a date (mm/dd/yy): 5/17/07
       Enter a date (mm/dd/yy): 6/3/07
       Enter a date (mm/dd/yy): 0/0/0
       5/17/07 is the earliest date
*/

#include <stdio.h>

int main(void)
{
    int day, month, year, dayMin = 0, monthMin = 0, yearMin = 0;



    do
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        if(day != 0 && month != 0 && year != 0)
        {
            if(yearMin <= year) //year minimo menor o igual al year
            {
                if (yearMin == year && monthMin > month) //
                {
                    yearMin = year;
                    monthMin = month;
                    dayMin = day;
                }
                else if (yearMin == year && monthMin == month && dayMin > day)
                {
                    yearMin = year;
                    monthMin = month;
                    dayMin = day;
                }
                else if (yearMin < year && yearMin == 0)
                {
                    yearMin = year;
                    monthMin = month;
                    dayMin = day;
                }
            }
            else
            {
                yearMin = year;
                monthMin = month;
                dayMin = day;
            }
        }

        
    } while (day != 0 && month != 0 && year != 0);
    
    printf("%.2d/%.2d/%.2d is the earliest date", monthMin, dayMin, yearMin);

    return 0;
}


    