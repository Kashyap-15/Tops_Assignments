#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][3], b[3][3], c[3][3];

    printf("\n Enter 6 value to put int 2D array name A : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n HEre is your array A : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t");
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n Enter 6 value to put int 2D array name B : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\n HEre is your array B :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }

    printf("\n HEre is your array C with addition :\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
    getch();
}