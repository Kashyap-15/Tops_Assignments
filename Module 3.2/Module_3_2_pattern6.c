#include<stdio.h>
void main(){
    int i,j,k;

    for(i=5;i>=1;i--)
    {
        for(k=i;k>=1;k--)
        {
            printf(" ");
        }

        for(j=9;j>=i*2-1;j--)
        {
        
            printf("*");
          
        }
        printf("\n");
    }

}