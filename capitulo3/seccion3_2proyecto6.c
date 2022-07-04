/* Adds two fractions */
/*Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the
same time, separated by a plus sign:*/

#include <stdio.h>
int main(void)
{
int numl, denoml, num2, denom2, result_num, result_denom;

printf("Enter first fraction and second fraction: ");
scanf("%d / %d + %d / %d", &numl, &denoml, &num2, &denom2);

result_num = numl * denom2 + num2 * denoml;

result_denom = denoml * denom2;
printf("The sum is %d/%d\n", result_num, result_denom);

return 0;
}