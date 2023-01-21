#include<stdio.h>
void main(){
    int i=0,count=0;

    char str[i];
    printf("entre your name :");
    scanf("%s",&str);
    printf(" \nYour name is : %s",str);

    while (str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nlength of the string is :%d",count);
}