#include <stdio.h>
void main()
{
    int i, n;
    printf("\n Entre any number to make its table : ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", n, i, n * 1);
    }
}