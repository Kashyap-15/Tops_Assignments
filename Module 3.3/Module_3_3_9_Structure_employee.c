#include<stdio.h>
#define n 1
struct employee
{
    char name[100];
    int num;
    char address[100];
    int age;
} e[n];

void main(){
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the name of the employee : ");
        scanf("%s",e[i].name);
        printf("\n Enter the number of the employee :");
        scanf("%d",&e[i].num);
        printf("\n Enter the address/City of the employee :");
        scanf("%s",e[i].address);
        printf("\n Enter the Age of the employee :");
        scanf("%d",&e[i].age);
    }

    for (int i = 0; i < n ; i++)
    {
        printf("----------------------------------------");
        printf("\nEmployee name is : ");
        puts(e[i].name);
        printf("\nEmployee number is : %d",e[i].num);
        printf("\nEmployee address is : ");
        puts(e[i].address);
        printf("\nEmployee age is : %d",e[i].age);
        printf("\n----------------------------------------");
    }
    
}