#include <stdio.h>
void main()
{
    int a, b, c, no;
   

    printf("\nEntre 1 to Sum A and B ");
    printf("\nEntre 2 to substrct A and B ");
    printf("\nEntre 3 to multiply A and B ");
    printf("\nEntre 4 to divide A and B ");

    printf("\nSelect Number From above menu :");
    scanf("%d", &c);

    printf("Entre value A to calculate : ");
    scanf("%d", &a);
    printf("Entre value B to calculate : ");
    scanf("%d", &b);

    switch (c)
    {
    case 1:
        printf("\nSum of A and B is : %d", a + b);
        break;

    case 2:
        printf("\nSubstraction of A and B is : %d", a - b);
        break;

    case 3:
        printf("\nMultiplication of A and B is : %d", a * b);
        break;

    case 4:
        printf("\nDivision of  A and B is : %f", (float)a / b);
        break;

    default:
        printf("\nInvalid output");
        break;
    }
}