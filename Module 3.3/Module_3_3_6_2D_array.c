#include<stdio.h>
void main(){
    int i,j;
    int a[2][2],b[2][2];
    int sum[2][2],sub[2][2],multi[2][2];

    for (i =0; i < 2; i++) //value from user for matrix A
    {
        for ( j= 0; j < 2; j++)
        {
            printf("\nEntre value for matrix a : ");
            scanf("%d",&a[i][j]);
        }
    }

    for (i =0; i < 2; i++) // matrix A print
    {
        for ( j= 0; j < 2; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }


    for (i =0; i < 2; i++) //value from user for matrix B
    {
        for ( j= 0; j < 2; j++)
        {
            printf("\nEntre value for matrix b : ");
            scanf("%d",&b[i][j]);
        }
        
    }

    for (i =0; i < 2; i++) // matrix B print
    {
        for ( j= 0; j < 2; j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }

    for (i =0; i < 2; i++) //Sum of matrix A and B
    {
        for ( j= 0; j < 2; j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
        
    }

    printf("\n Sum Of matrix A and B is  : \n"); 

    for (i =0; i < 2; i++) //Sum of matrix A and B {print}
    {
        for ( j= 0; j < 2; j++)
        {
          printf(" %d",sum[i][j]);
        }
        printf("\n");
    }

    for (i =0; i < 2; i++) //Substraction of matrix A and B
    {
        for ( j= 0; j < 2; j++)
        {
           sub[i][j]=a[i][j]-b[i][j];
        }
        
    }

    printf("\n Substraction Of matrix A and B is  : \n"); 

    for (i =0; i < 2; i++) //Substration of matrix A and B {print}
    {
        for ( j= 0; j < 2; j++)
        {
          printf(" %d",sub[i][j]);
        }
        printf("\n");
    }

    for (i =0; i < 2; i++) //multipilcation of matrix A and B
    {
        for ( j= 0; j < 2; j++)
        {
           multi[i][j]=a[i][j]*b[i][j];
        }
        
    }

    printf("\n Multi Of matrix A and B is  : \n"); 

    for (i =0; i < 2; i++) //Sum of matrix A and B {print}
    {
        for ( j= 0; j < 2; j++)
        {
          printf(" %d",multi[i][j]);
        }
        printf("\n");
    }
}