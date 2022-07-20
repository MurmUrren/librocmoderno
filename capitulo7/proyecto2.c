/*
Modify the square2.c program of Section 6.3 so that it 
   pauses every 24 squares and displays the following message:
       Press Enter to continue...
   After displaying the message, the program should use
   getchar to read a character. getchar won't allow the 
   program to continue until the user presses the Enter key.
*/

#include <stdio.h>

int main(void)
{
    int i, n, invertalo = 24;

    printf("\nThis program prints a tables of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar() == ' ';

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i); //fails at 46341 with int and long and at 182 on short

        if (i % invertalo == 0)
        {
            printf("Press Enter to continue...");
            do {
            } while(getchar() != '\n');
        }
    }

    return 0;
}