#include <stdio.h>

/*
Write calls of p r i n t f that display a f l o a t variable x in the following formats.
(a) Exponential notation; left-justified in a field of size 8: one digit after the decimal point.
(b) Exponential notation; right-justified in a field of size 10; six digits after the decimal
point.
(c) Fixed decimal notation: left-justified in a field of size 8; three digits after the decimal
point.
(d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal
point.
*/

int main(void)
{
    int i;
    float x;
    int j;

    printf("%-8.1e", 20.53);
    printf("\n%10.6e", 20.53);
    printf("\n%-8.3f", 20.53);
    printf("\n%6.0f\n", 20.53);
    scanf("%d%f%d", &i, &x, &j);
    printf("%d\n%f\n%d", i, x, j);

    return 0;
}