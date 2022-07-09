/*
Using the switch statement, write a program that converts a numerical grade into a letter
grade:

Enter numerical grade: 84
Letter grade: B

Use the following grading scale: A = 90-100. B = 80-89. C = 70-79. D = 60-69. F = 0-59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten’s digit.

*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");

    scanf("%d", &grade);

    if (grade > 100 || grade < 0)
    {
        printf("Error");
    }
    else
    {
        grade = grade / 10;
        switch (grade)
        {
        case 10: case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf ("C");
            break;
        case 6:
            printf ("D");
            break;      
        default:
            printf ("F");
            break;
        }
    }


}

