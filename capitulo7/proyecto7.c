/*
Modify Programming Project 6 from Chapter 3 so that the user
   may add, subtract, multiply, or divide two fractions 
   (by entering either +, -, *, or / between the fractions).
*/

#include <stdio.h>

int main(void)
{
char option;
int numl, denoml, num2, denom2, result_num, result_denom;

printf("\nThis program will add, substract, multiply or divide two fractions.");
printf("\nEnter first fraction and second fraction (example 5/3 + 4/3): ");
scanf("%d / %d %c %d / %d", &numl, &denoml, &option, &num2, &denom2);

switch(option)
{
    case '+':
    result_num = numl * denom2 + num2 * denoml;
    result_denom = denoml * denom2;
    printf("The result is %d/%d\n", result_num, result_denom);
    break;

    case '-':
    result_num = numl * denom2 - num2 * denoml;
    result_denom = denoml * denom2;
    printf("The result is %d/%d\n", result_num, result_denom);
    break;

    case '/':
    result_num = numl * denom2;
    result_denom = denoml * num2;
    printf("The result is %d/%d\n", result_num, result_denom);
    break;

    case '*':
    result_num = numl * num2;
    result_denom = denoml * denom2;
    printf("The result is %d/%d\n", result_num, result_denom);
    break;

    default:
    printf("Invalid operator, run the program again.");
    break;
}
    
return 0;
}