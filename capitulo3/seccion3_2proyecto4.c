/*Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx
and then displays the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
You entered 404.817.6900*/
#include <stdio.h>

int main(void)
{
    int phoneNumberLada, phoneNumber3, phoneNumber4;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d - %d", &phoneNumberLada, &phoneNumber3, &phoneNumber4);
    printf("%d.%d.%d", phoneNumberLada, phoneNumber3, phoneNumber4);
    return 0;
}