#include<stdio.h>
int fact(int n)
{
    if(n!=0)
    {
       return(fact(n-1)*n);
    }
    else
    {
        return 1;
    }
}
void main(){
    int n;
    printf("\nEnter the number to find factorial : ");
    scanf("%d",&n);

    int x=fact(n);
    printf("\n The factorial of %d is : %d",n,x);
}