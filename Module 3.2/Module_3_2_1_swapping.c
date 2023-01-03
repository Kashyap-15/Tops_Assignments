#include <stdio.h>
void main()
{
    int a, b;
    printf("\nentre the value of a :", a);
    scanf("%d", &a);

    printf("\nentre the value of b :", b);
    scanf("%d", &b);

    printf("\nBefore swapping a is %d and b is %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping a is %d and b is %d", a, b);
}