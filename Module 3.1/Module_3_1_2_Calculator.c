#include <stdio.h>
void main()
{
    int a, b;

    // Addition
    printf("\n Please entre the number 'a' : ");
    scanf("%d", &a);
    printf("\n Please entre the number 'b' : ");
    scanf("%d", &b);

    printf("\nAddition of 'a' and 'b' is : %d", a + b);

    // Substraction
    printf("\n Please entre the number 'a' : ");
    scanf("%d", &a);
    printf("\n Please entre the number 'b' : ");
    scanf("%d", &b);

    printf("\nSubstraction of 'a' and 'b' is : %d", a - b);

    // Multiplication
    printf("\n Please entre the number 'a' : ");
    scanf("%d", &a);
    printf("\n Please entre the number 'b' : ");
    scanf("%d", &b);

    printf("\nMultiplication of 'a' and 'b' is : %d", a * b);

    // Division
    printf("\n Please entre the number 'a' : ");
    scanf("%d", &a);
    printf("\n Please entre the number 'b' : ");
    scanf("%d", &b);

    printf("\nDivision of 'a' and 'b' is : %f", (float)a / b);

    // Modulus
    printf("\n Please entre the number 'a' : ");
    scanf("%d", &a);
    printf("\n Please entre the number 'b' : ");
    scanf("%d", &b);

    printf("\nModulus of 'a' and 'b' is  : %d", a % b);
}