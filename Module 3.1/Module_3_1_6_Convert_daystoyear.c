#include <stdio.h>
void main()
{
    int days;
    float years;

    // code to convert days in years
    printf("\n Please entre the days : ");
    scanf("%d", &days);

    printf("\n Your days converts into %f Years", (float)days / 365);

    // code to convert years into days
    printf("\n Please entre the years : ");
    scanf("%f", &years);

    printf("\n Your years converts into %f Days", (float)years * 365);
}