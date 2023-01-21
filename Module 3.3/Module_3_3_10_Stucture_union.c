#include <stdio.h>
#include <string.h>
#define N 1
struct structure1
{
    char name[100];
    char branch[100];
    int roll_no;
    int age;

} s[N];

union union1
{
    int salary;
    char city[100];
};

void main()
{
    for (int i = 0; i < N; i++)
    {
        printf("\n Enter the name : ");
        scanf("%s", s[i].name);
        printf("\n Enter the Branch :");
        scanf("%s", s[i].branch);
        printf("\n Enter the Roll no :");
        scanf("%d", &s[i].roll_no);
        printf("\n Enter the Age  :");
        scanf("%d", &s[i].age);
    }

    for (int i = 0; i < N; i++)
    {
        printf("\n Name is : ");
        puts(s[i].name);

        printf("\nBranch is : ");
        puts(s[i].branch);
        printf("\n ROll no  is : %d", s[i].roll_no);
        printf("\nAge is : %d", s[i].age);
    }

    union union1 un;
    int salary = 400000, i;
    strcpy(un.city, "surat");
    printf("\n city :");
    puts(un.city);
    printf(" \n salary : %d", un.salary);

    printf("\n Difference between structure and union is \n\n difference 1 :");
    {
        printf("\nAddess of Structure is here------------------");
        printf("\nName : %p", &s[i].name);
        printf("\nBranch: %p", &s[i].branch);
        printf("\nRoll No : %p", &s[i].roll_no);
        printf("\nAGE : %p", &s[i].age);
    }
    printf("\nAddress of unioin is here ---------------------\n");
    printf("\ncity : %p", &un.city);
    printf("\nSalary : %p", &un.salary);

    printf("\n\nDifference 2 :-------------------------\n");
    printf("\nSize of structure is : %d", sizeof(s));
    printf("\nSize of union is : %d", sizeof(un));
}