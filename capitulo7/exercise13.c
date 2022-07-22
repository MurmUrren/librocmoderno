/*
Use typedef to create types names Int8, Int16, and Int32. Define the types so that they represent 8-bit, 16-bit and 32-bit integers on your machine.
*/

typedef char Int8;
typedef short Int16;
typedef int Int32;

#include <stdio.h>

int main(void)
{
    Int8 a = 20;
    Int16 b = 14;
    Int32 c = 3215156;

    printf("\n%d", a);
    printf("\n%d", b);
    printf("\n%d", c);

    return 0;
}