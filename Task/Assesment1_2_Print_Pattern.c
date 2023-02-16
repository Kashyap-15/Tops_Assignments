#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, a, b, c;
    printf("\n----------------------------------\n");
    printf("\n Hello World ");
    printf("\n----------------------------------\n");
    printf("\n----------------------------------\n");
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    printf("\n----------------------------------\n");
    printf("\n----------------------------------\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("a");
        }
        printf("\n");
    }
    printf("\n----------------------------------\n");

    getch();
}