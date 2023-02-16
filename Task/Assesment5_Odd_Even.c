#include<stdio.h>
void main()
{
    for (int i = 1; i <= 50; i++)
    {
        if(i%2==0)
        {
            printf("\n Even - %d\n",i);
        }
    }
    for (int i = 1; i <= 50; i++)
    {
        if(i%2!=0)
        {
            printf("\n Odd - %d\n",i);
        }
    }
}