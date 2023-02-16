#include <stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, n;
     printf("\n----------------------------------\n");
    printf("\n Enter 2 value to do arethemtic operation : ");
    scanf("%d%d", &a, &b);
     printf("\n----------------------------------\n");
    printf("\n Press 1 for addition ");
    printf("\n Press 2 for substraction ");
    printf("\n Press 3 for Multiplication ");
    printf("\n give the input from above : ");
    scanf("%d", &n);
     printf("\n----------------------------------\n");

    switch (n)
    {
    case 1:
        c = a + b;
         printf("\n----------------------------------\n");
        printf("\n The addition is %d", c);
         printf("\n----------------------------------\n");
        break;
    case 2:
        c = a - b;
         printf("\n----------------------------------\n");
        printf("\n The substraction is %d", c);
         printf("\n----------------------------------\n");
        break;
    case 3:
        c = a * b;
         printf("\n----------------------------------\n");
        printf("\n The multiplication is %d", c);
         printf("\n----------------------------------\n");
        break;

    default:
     printf("\n----------------------------------\n");
        printf("\n Invalid input ");
         printf("\n----------------------------------\n");
        break;
    }
    getch();
}

    