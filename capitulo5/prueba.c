#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 5, j = 0, k = - 5 ;
    printf("%d", i && j || ++k );
    printf("\n%d", k);

    
}