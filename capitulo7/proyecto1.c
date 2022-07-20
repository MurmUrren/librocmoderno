/*
The square2.c program of Section 6.2 will fail (usually by
   printing strange answers) if i * i exceeds the maximum int
   value. Run the program and determine the smallest value of 
   n that causes failure. Try changing the type of i to short
   and running the program again. (Don't forget to update the
   conversion specifications in the call to printf!) Then try
   long. From these experiments, what can you conclude about
   the number of bits used to store integer types on your
   machine?
*/

//using a 64 bytes machine

#include <stdio.h>

int main(void)
{
    short i, n;

    printf("\nThis program prints a tables of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%10hd\t%10hd\n", i, i * i); //fails at 46341 with int and long and at 182 on short

    return 0;
}