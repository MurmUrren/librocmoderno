#include <stdio.h>

int main(void)
{
    int modulo;
    modulo = -7 % 5;


    printf("%d\n", modulo);

    int i = 6;
    int j = i += i;
    printf( "%d %d\n", i , j ) ;

    int k = 1;
    printf( "%d\n", k++ - 1);
    printf( "%d", k);


    return 0;
}