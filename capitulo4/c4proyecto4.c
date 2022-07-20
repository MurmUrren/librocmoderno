/*Write a program that reads an integer entered by the user and then display it in octal (base 8)
Example:

Enter a number between 0 and 32767: 1953
In octal, your number is: 03641

The output should be displayed using five digits, even if fewer digits are sufficient.
*/

#include <stdio.h>

int main(void)
{
    int numero, division1, sobrante1, division2, sobrante2, division3, sobrante3, division4, sobrante4, division5, sobrante5;

    printf("Enter a number between 0 a 32767: ");
    scanf("%d", &numero);

    division1 = (numero / 8);
    sobrante1 = (numero % 8);
    division2 = (division1 / 8);
    sobrante2 = (division1 % 8);
    division3 = (division2 / 8);
    sobrante3 = (division2 % 8);
    division4 = (division3 / 8);
    sobrante4 = (division3 % 8);
    division5 = (division4 / 8);
    sobrante5 = (division4 % 8);

    printf("In octal, your number is: %d%d%d%d%d", sobrante5, sobrante4, sobrante3, sobrante2, sobrante1);
    return 0;
}