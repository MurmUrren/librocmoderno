/*
Write a program that asks the user to enter a two - digit number , then prints the number with
its digits reversed. A session with the program should have the following appearance :
Enter a two-digit number: 28
The reversal is: 82
Read the number using %d, then break it into two digits.
*/

#include <stdio.h>

int main(void)
{
    int number;

    

    printf("Enter a three-digit number: ");
    scanf("%d", &number);


    int numberFirstDigit = number / 100; //esto te permite obtener el primer digito
    int numberSeparate = number % 100; //esto te permitira separar el segundo y tercer numero del 1ro, ejemplo 123 % 100 da como resultado 23.
    int numberSecondDigit = numberSeparate / 10; 
    int numberThirdDigit = numberSeparate % 10; //esto te permite obtener el tercer digito

    printf("The reversal is: %d%d%d",numberThirdDigit, numberSecondDigit, numberFirstDigit);
    

    return 0;
}