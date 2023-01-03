#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        char a = 'A';
        for (j = 1; j <= i; j++)
        {
            printf(" %c", a);
            a++;
        }
        printf("\n");
    }
}