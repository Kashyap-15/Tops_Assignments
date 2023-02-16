#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("\n----------------------------------\n");
    printf("\n Enter 3 numbers to find greatest : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("\n----------------------------------\n");
            printf("\n A is greatest ");
            printf("\n----------------------------------\n");
        }
        else
        {
            printf("\n----------------------------------\n");
            printf("\n C is greatest ");
            printf("\n----------------------------------\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("\n----------------------------------\n");
            printf("\n B is Greatest ");
            printf("\n----------------------------------\n");
        }
        else
        {
            printf("\n----------------------------------\n");
            printf("\n C is Greatest ");
            printf("\n----------------------------------\n");
        }
    }
    getch();
}