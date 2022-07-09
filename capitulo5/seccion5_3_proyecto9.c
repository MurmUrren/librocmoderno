/*Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08

*/

#include <stdio.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2;

    printf("Enter the first date (mm/dd/yy): ");
    scanf("%2d / %2d / %2d", &month1, &day1, &year1);

    printf("Enter the second (mm/dd/yy) date: ");
    scanf("%2d / %2d / %2d", &month2, &day2, &year2);

    if (year1 < year2)
    { 
        printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2, month2, year2);
    }
    if (year1 > year2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1, month1, year1);
    }
    if (year1 == year2)
    {
        if (month1 < month2)
        {
           printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2, month2, year2);
        }
        if (month1 > month2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1, month1, year1);
        }
        if (month1 == month2)
        {
            if (day1 < day2)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2, month2, year2);
            }
            else
            {
                printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1, month1, year1);
            }
        }    
    }
    return 0;
}