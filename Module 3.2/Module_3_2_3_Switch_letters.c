#include <stdio.h>
void main()
{
    char ch;
    printf("\n Entre any letter to see weather it is vowel or consonant :");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("\n This is vowel");
        break;

        default:
        printf("\n This is consonant");
        break;
    }
}