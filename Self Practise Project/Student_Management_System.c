#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 2
struct student_management
{
    char name[50],gender[10];
    int age,roll_no;

}st[N];

void addData()
{
    for (int i = 0; i < N; i++)
    {
        printf("\n-----------------------------------------------------");
        printf("\n Enter The student's Name : ");
        scanf("%s",st[i].name);
        printf("\n Enter The Age : ");
        scanf("%d",&st[i].age);
        printf("\n Enter The Gender : ");
        scanf("%s",st[i].gender);
        printf("\n Enter The Roll No : ");
        scanf("%d",&st[i].roll_no);
        printf("\n-----------------------------------------------------");
    }
};

void display()
{
    for (int i = 0; i < N; i++)
    {
        printf("\n-----------------------------------------------------");
        printf("\n Name : %s",st[i].name);
        printf("\n Age : %d",st[i].age);
        printf("\n Gender : %s",st[i].gender);
        printf("\n Roll No : %d",st[i].roll_no);
        printf("\n-----------------------------------------------------");
    }
};

void searchByname()
{
    int sname[50];
    printf("\n Enter the name to find from the list : ");
    scanf("%s",&sname);
    for (int i = 0; i < N; i++)
    {
        if(strcmp(sname,st[i].name)==0)
        {
        printf("\n-----------------------------------------------------");
        printf("\n Name : %s",st[i].name);
        printf("\n Age : %d",st[i].age);
        printf("\n Gender : %s",st[i].gender);
        printf("\n Roll No : %d",st[i].roll_no);
        printf("\n-----------------------------------------------------");
        }
        else
        {
            printf("\n No student is there with this input ");
        }
    }   
};

void searchByrollno()
{
    int sroll_no;
    printf("\n Enter the roll number to find the student : ");
    scanf("%d",&sroll_no);
    for (int i = 0; i < N; i++)
    {
        if(sroll_no==st[i].roll_no)
        {
        printf("\n-----------------------------------------------------");
        printf("\n Name : %s",st[i].name);
        printf("\n Age : %d",st[i].age);
        printf("\n Gender : %s",st[i].gender);
        printf("\n Roll No : %d",st[i].roll_no);
        printf("\n-----------------------------------------------------");
        }
        else
        {
            printf("\n No student is there with this input ");
        }
    }
};

void searchByage()
{
    int sage;
    printf("\n Enter the age to find the candidates : ");
    scanf("%d",&sage);
    for (int i = 0; i < N; i++)
    {
        if(sage==st[i].age)
        {
        printf("\n-----------------------------------------------------");
        printf("\n Name : %s",st[i].name);
        printf("\n Age : %d",st[i].age);
        printf("\n Gender : %s",st[i].gender);
        printf("\n Roll No : %d",st[i].roll_no);
        printf("\n-----------------------------------------------------");
        }
        else
        {
            printf("\n No student is there with this input ");
        }
    }
    
};

void changeData()
{
    int s1name[50];
    printf("\n Enter the name to find from the list : ");
    scanf("%s",&s1name);
    for (int i = 0; i < 1; i++)
    {
        if (s1name,st[i].name)
        {
        printf("\n-----------------------------------------------------");
        printf("\n Name : %s",st[i].name);
        printf("\n Age : %d",st[i].age);
        printf("\n Gender : %s",st[i].gender);
        printf("\n Roll No : %d",st[i].roll_no);
        printf("\n-----------------------------------------------------");
        printf("\n-----------------------------------------------------");
        printf("\n Enter The student's Name : ");
        scanf("%s",st[i].name);
        printf("\n Enter The Age : ");
        scanf("%d",&st[i].age);
        printf("\n Enter The Gender : ");
        scanf("%s",st[i].gender);
        printf("\n Enter The Roll No : ");
        scanf("%d",&st[i].roll_no);
        printf("\n-----------------------------------------------------");
        }
        else
        {
            printf("\n Erorr ");
        }
        
    }
    
};

int main()
{
    int n,regain;
    printf("\n Welcome to SMT. V. D. Desai(Wadiwala) School ");
    printf("\n-----------------------------------------------------");
    printf("\n-----------------------------------------------------");
    printf("\n Please enter the Details given below : (You can add %d Students in once) ",N);
    printf("\n-----------------------------------------------------");
    printf("\n-----------------------------------------------------");
    printf("\n-----------------------------------------------------");
    addData();
    printf("\n-----------------------------------------------------");
    printf("\n-----------------------------------------------------");
    here:
    printf("\n Press 1 : to search student by the Name ");
    printf("\n Press 2 : to search student by the Roll No ");
    printf("\n Press 3 : to search student by the age ");
    printf("\n Press 4 : to Display all student Data ");
    printf("\n Press 5 : to Change Student Data ");
    printf("\n Please choose above number to find the students : ");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------");
    
    switch (n)
    {
    case 1:
        searchByname();
        break;
    
    case 2:
        searchByrollno();
        break;

    case 3:
        searchByage();
        break;
    
    case 4:
        display();
        break;
    
    case 5:
        changeData();
        break;

    default:
        printf("\n Invalid Input ");
        break;
    }

    printf("\n Do you want to Go to the menu again ?");
    printf("\n-----------------------------------------------------");
    printf("\n press 1 for yes :");
    printf("\n press 2 for no : ");
    scanf("%d",&regain);
    printf("\n-----------------------------------------------------");
    if (regain==1)
    {
        goto here;
    }
    else
    {
        printf("\n-----------------------------------------------------");
        printf("\nThe process is completed ");
        printf("\n-----------------------------------------------------");
    }
    getch();
    return 0;
}