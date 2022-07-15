/*
What output does the following program fragment produce?
i = 9384;
do {
printf("%d ", i) ;
i /= 10;
} while (i > 0 ) ;

Translate the program fragment o f Exercise 2 into a single for statement.
*/

#include <stdio.h>

int main(void)
{
    for(int i = 9384; i > 0; i /= 10)
    {
        printf("%d\n", i);
    }

    return 0;
}