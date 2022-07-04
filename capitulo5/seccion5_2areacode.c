#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int areaCode;

    printf("Please enter the area code: ");
    scanf("%d", &areaCode);

    switch (areaCode)
    {
    case 229:
        printf("Albany"); 
        break;
    case 404:
        printf("Atlanta"); 
        break;
    case 470:
        printf("Atlanta"); 
        break;
    case 478:
        printf("Macon"); 
        break;
    default:
        printf("Area code not recognized"); 
        break;
    }
    return 0;
}