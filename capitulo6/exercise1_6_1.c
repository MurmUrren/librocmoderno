/*  1. What output does the following program fragment produce?
i = 1;
while (i <= 128) {
p r i n t f ( "%d " , i);
i *= 2;
}

Translate the program fragment o f Exercise I into a single for statement.

*/

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 128; i *= 2) {
    printf ("%d\n", i);
    }

    return 0;
}

