#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    int teenager;

    if (age >= 13 && age <= 19)
    {
        teenager = true;
        printf("Eres un adolescente putito");
    }
    else
    {
        teenager = false;
        printf("No eres un adolescente");
    }  
    return 0;
}