#include <stdio.h>
void main()
{
    int day;
    printf("\n Please entre a number to see the Day :");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("\n This is Sunday!!!");
        break;

    case 2:
        printf("\n This is Monday!!!");
        break;

    case 3:
        printf("\n This is Tuesday!!!");
        break;

    case 4:
        printf("\n This is Wednesday!!!");
        break;

    case 5:
        printf("\n This is Thursday!!!");
        break;

    case 6:
        printf("\n This is Friday!!!");
        break;

    case 7:
        printf("\n This is Saturday!!!");
        break;

    default:
        printf("\n This is Invalid Input!!!");
        break;
    }
}