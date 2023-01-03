#include <stdio.h>
void main()
{
    int a;
    printf("\nEntre any number to check weather it is even or odd :");
    scanf("%d", &a);

    if ((a % 2 == 0) ? printf("even number") : printf("odd number"));
}