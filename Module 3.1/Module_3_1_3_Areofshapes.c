#include <stdio.h>
void main()
{
    int l, b, r, h, base;

    printf("\nPlease entre the length of the rectagle l :");
    scanf("%d", &l);
    printf("\nPlease entre the breadth of the rectagle b :");
    scanf("%d", &b);

    // Area of ractangle
    printf("\n Area of ractangle with lenght l and breadth b is : %d", l * b);

    printf("\nPlease entre the height of the triagle h :");
    scanf("%d", &h);
    printf("\nPlease entre the base of the triagle base :");
    scanf("%d", &base);

    // Are of triangle
    printf("\n Are of triangle with hight h and base is : %f", (float)0.5 * h * base);

    printf("\nPlease entre the Radius of the circle r :");
    scanf("%d", &r);

    // Area of circle
    printf("\n Area of circle with radius if r is : %f", 3.14 * r * r);
}