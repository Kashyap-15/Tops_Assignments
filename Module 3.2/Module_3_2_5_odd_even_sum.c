#include <stdio.h>
void main()
{
    int i, n;
    int evencount = 0, oddcount = 0;
    int evensum = 0, oddsum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("\nPlease entre any 10 number from keyboard :");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            evencount++;
            evensum = evensum + n;
        }
        else if (n % 2 != 0)
        {
            oddcount++;
            oddsum = oddsum + n;
        }
    }
    printf("\n Count of even number is = %d", evencount);
    printf("\n Count of odd number is = %d", oddcount);
    printf("\n Sum of even number is = %d", evensum);
    printf("\n Sum of odd number is = %d", oddsum);
}