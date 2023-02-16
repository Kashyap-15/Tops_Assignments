#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char name[10], surname[10], id[10];
    printf("\n----------------------------------");
    printf("\n ENTER THE Id : ");
    scanf("%s", id);
    printf("\n----------------------------------");
    printf("\n Enter your name : ");
    scanf("%s", name);
    printf("\n----------------------------------");
    printf("\n Enter your Surname : ");
    scanf("%s", surname);
    printf("\n----------------------------------");
    printf("\n----------------------------------");
    printf("\n ID is : %s", id);
    printf("\n----------------------------------");
    printf("\n The size of  name is : %d", strlen(name));
    printf("\n----------------------------------");
    printf("\n The full name is : %s", strcat(name, surname));
    printf("\n----------------------------------");
    printf("\n The reverse of  name is : %s", strrev(name));
    printf("\n----------------------------------");

    strcpy(name, surname);
    printf("\n The surname copies in name : %s", name);
    printf("\n----------------------------------");

    if (strcmp(name, surname) == 0)
    {

        printf("\n The name and surname is same \n ");
        printf("\n----------------------------------");
    }

    else
    {
        printf("\n The name and surname is not same  \n");
        printf("\n----------------------------------");
    }
    getch();
}
