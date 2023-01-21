#include<stdio.h>
#include<string.h>
void main(){

    char word[50],revword[50];
    printf("\nEnter the a string or a word to check the palindrome : ");
    scanf("%s",&word);

    printf("\n The reversed a string or a word is : %s",strrev(word));

    strcpy(revword,word);
    strrev(revword);

    if(strcmp(word,revword)==0)
    {
        printf("\n This is a palindrome word");
    }
    else
    {
        printf("\n This is not a palindrome word ");
    }   
}   

