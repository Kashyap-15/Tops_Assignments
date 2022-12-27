#include <stdio.h>
void main()
{
    int year;

    printf("\n Please entre a year to check weather it is leap year or not :");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("\n This is a leap year");
    }
    else
    {
        printf("\n This is not a leap year");
    }
}