#include <stdio.h>
void main()
{
    int no, rem, sum = 0;
    printf("entre the any numbers to sum their digits :");
    scanf("%d", &no);

    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        sum += rem;
    }
    printf("the summetion of first and last digit of number is : %d", sum);
}