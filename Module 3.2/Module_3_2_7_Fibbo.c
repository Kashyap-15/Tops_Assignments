#include <stdio.h>
void main()
{
    int a = 1, b = 1, c;
    int i, n;

    printf("\n Entre a number for fibbo :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d ", c);
    }
}