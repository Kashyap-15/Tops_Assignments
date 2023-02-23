#include<stdio.h>
#include<conio.h>
void addition();    // defined the addition function here
void substraction();
void multiplication();
void division();
int main()
{
    int repeat;
    do      // Do while loop is used to get multiple entries from the user without leaving the programme
    {
        int input;
        printf("\n-------------------------Menu-------------------------"); // printed the menu
        printf("\n 1) Addition ");
        printf("\n 2) Substraction ");
        printf("\n 3) Multiplication ");
        printf("\n 4) Division ");
        printf("\n-------------------------------------------------------");
        printf("\n Please Enter your choice : ");   // Take the input from user 
        scanf("%d",&input);
        printf("\n-------------------------------------------------------");
        switch (input)  // used the switch cas as we have to use menu dirven programme
        {
        case 1:
            addition(); // Called the function of addition here
            break;
        
        case 2:
            substraction();
            break;
        
        case 3:
            multiplication();
            break;
        
        case 4:
            division();
            break;
        
        default:
        printf("\n--- Invalid Input ---");  // this is used if the user does not enter the input from menu
            break;
        }
        printf("\n Press 1) For Menu And Press 2) For Exit : ");    //The condition for Returning to menu is given here
        scanf("%d",&repeat);
    } while (repeat==1);

    printf("\n-------------------------------------------------------");
    printf("\n--- Calculation is completed --- ");      // this sentence concluded the programme or the proccess
    getch();
    return 0;
}

void addition()
{
    float a,b,c;    // defined the variables
    printf("\n Enter the first number A : ");
    scanf("%f",&a); // input from the user for first value
    printf("\n Enter the Second number B : ");
    scanf("%f",&b); //input from the used for second value
    c=a+b;  //addition of 2 values
    printf("\n Addition : %f + %f = %f ",a,b,c);    
    printf("\n-------------------------------------------------------");
}
void substraction()
{
    float a,b,c;
    printf("\n Enter the first number A : ");
    scanf("%f",&a);
    printf("\n Enter the Second number B : ");
    scanf("%f",&b);
    c=a-b;
    printf("\n Substraction : %f - %f = %f ",a,b,c);
    printf("\n-------------------------------------------------------");
}
void multiplication()
{
    float a,b,c;
    printf("\n Enter the first number A : ");
    scanf("%f",&a);
    printf("\n Enter the Second number B : ");
    scanf("%f",&b);
    c=a*b;
    printf("\n Multiplication : %f * %f = %f ",a,b,c);
    printf("\n-------------------------------------------------------");
}
void division()
{
    float a,b,c;
    printf("\n Enter the first number A : ");
    scanf("%f",&a);
    printf("\n Enter the Second number B : ");
    scanf("%f",&b);
    if (b==0)
    {
        printf("\n Demonimator should not be zero ");   // here we have took the condition because in division if denominatr zero the the answer is infinty
        printf("\n-------------------------------------------------------");
    }
    else
    {
        c=a/b;
        printf("\n Division : %f / %f = %f ",a,b,c);    // output of division if B!=0
        printf("\n-------------------------------------------------------");
    }
}