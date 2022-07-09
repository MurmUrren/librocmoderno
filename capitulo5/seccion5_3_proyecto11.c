/*
Write a program that asks the user for a two-digit number, then prints the F.nglish word for
the number:
Enter a two-digit number: 45
You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit (“twenty.” "thiny," and so forth). Use a second switch statement to print the
word for the second digit. Don't forget that the numbers between 11 and 19 require special
treatment.
*/

#include <stdio.h>

int main(void)
{
    int numberPartOne, numberPartTwo;
    
    printf("Enter a two-digit number: ");
    scanf("%1d%1d",&numberPartOne, &numberPartTwo);

    printf("You entered the number ");

    if(numberPartOne == 1)
    {
        switch (numberPartOne)
    {
    case 1:
        switch (numberPartTwo)
        {
        case 1:
        printf("Eleven");
            break;
        case 2:
        printf("Twelve");
            break;
        case 3:
        printf("Thirteen");
            break;
        case 4:
        printf("Fourteen");
            break;
        case 5:
        printf("Fiveteen");
            break;
        case 6:
        printf("Sixteen");
            break;
        case 7:
        printf("Seventeen");
            break;
        case 8:
        printf("Eighteen");
            break;
        case 9:
        printf("Nineteen");
            break;
        }
        break;
    }

    }

    else
    {
        switch (numberPartOne)
    {
    
    case 2:
    printf("Twenty");
        break;
    case 3:
    printf("Thirty");
        break;
    case 4:
    printf("Forty");
        break;
    case 5:
    printf("Fifty");
        break;
    case 6:
    printf("Sixty");
        break;
    case 7:
    printf("Seventy");
        break;
    case 8:
    printf("Eighty");
        break;
    case 9:
    printf("Ninety");
        break;
    }

    switch (numberPartTwo)
    {
    case 1:
    printf("-one");
        break;
    case 2:
    printf("-two");
        break;
    case 3:
    printf("-three");
        break;
    case 4:
    printf("-four");
        break;
    case 5:
    printf("-five");
        break;
    case 6:
    printf("-six");
        break;
    case 7:
    printf("-seven");
        break;
    case 8:
    printf("-eight");
        break;
    case 9:
    printf("-nine");
        break;
    }

    }

    return 0;
   
}