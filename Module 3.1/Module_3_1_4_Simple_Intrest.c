#include <stdio.h>
void main()
{
    int t = 5, r = 7.4, p;

    printf("\n Please entre the Principle amount :");
    scanf("%d", &p);

    printf("\n The tenure of account if 5 years and rate of simple intrest is 7.4(fixed)");
    printf("\n simple intrest you will get is : %f", (float)p * t * r / 100);
}