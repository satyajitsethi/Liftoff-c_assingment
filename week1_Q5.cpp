
#include<stdio.h>
int main()
{
char x;
printf("ENTER THE ALPHABET: ");
scanf("%c",&x);
printf("\n");
switch(x)
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
    printf("THE ENTERED ALPHABET IS VOWEL");
    break;
    default:
    printf("THE ENTERED ALPHABET IS CONSONANT");
    }
return 0;
}
