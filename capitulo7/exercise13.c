/*
Use typedef to create types names Int8, Int16, and Int32. Define the types so that they represent 8-bit, 16-bit and 32-bit integers on your machine.
*/

typedef char Int8;
typedef short Int16;
typedef int Int32;

#define INT32 int

#include <stdio.h>

int main(void)
{
    INT32 a = 20;

    printf("%d", a);


}