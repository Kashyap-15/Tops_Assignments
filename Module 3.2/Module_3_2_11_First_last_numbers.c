#include <stdio.h>
void main()
{
    int no, rem1, rem;
    printf("entre the any numbers to sum its first and last digit :");
    scanf("%d", &no);

    rem1 = no % 10;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
    }
    int sum = rem + rem1;
    printf("the sum of first and last digit of number is : %d", sum);
}