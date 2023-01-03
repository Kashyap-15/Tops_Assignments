#include <stdio.h>
void main()
{
    int i;
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n Entre 5 different value :");
        scanf("%d", &a[i]);
    }

    printf("Before revser : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nAfter revser : ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}