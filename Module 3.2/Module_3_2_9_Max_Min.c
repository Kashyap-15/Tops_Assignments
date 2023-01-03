#include <stdio.h>
void main()
{
    int i, small = 9, large = 0, digit;

    printf("Print any numbers to find smallest and largest number from it : ");
    scanf("%d", &i);

    while (i != 0)
    {
        digit = i % 10;
        if (digit < small)
            small = digit;
        if (digit > large)
            large = digit;
        i = i / 10;
    }
    printf("\n largest number is %d", large);
    printf("\n smallest number is %d", small);
}