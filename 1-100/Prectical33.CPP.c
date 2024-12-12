#include <stdio.h>
#include <conio.h>

void main() 
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);


    switch(alphabet)
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
        printf("%c is a vowel.", alphabet);
            break;
        default:
            printf("%c is a consonant.", alphabet);
    }

    getch();
    
}