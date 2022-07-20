#include <stdio.h>


int main(void)
{
    int len = 0;

    printf("\nEnter a message: ");

    while (getchar() != '\n') 
        len++;

    printf("Your message was %d character(s) long.\n\n", len);

    return 0;
}