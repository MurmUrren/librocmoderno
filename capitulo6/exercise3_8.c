/*
9. Translate the for statement of Exercise 8 into an equivalent while statement. You will
need one statement in addition to the while loop itself.

for (i = 10; i >= 1 ; i /= 2)
printf( "%d", i++);

*/

/*
10. Show how to replace a continue statement with an equivalent goto statement 

int main(void)
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d", i++);
        i -= 2;
        
        continue;
        printf("Ctm");
    }
}
*/

int main(void)
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d", i++);
        i -= 2;
        goto loop_end;

        printf("Ctm");

        loop_end: ;
    }

    return 0;
}