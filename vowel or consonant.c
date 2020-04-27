#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet:\n");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a': case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
        printf("Alphabet is a vowel.\n");
        break;

    default:
        printf("Alphabet is a consonant.");
        break;
    }
return 0;
}

