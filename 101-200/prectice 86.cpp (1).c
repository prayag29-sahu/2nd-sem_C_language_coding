#include <stdio.h>
#include <conio.h>

void main() 
{
    char a[100];
    int l = 0;

    printf("Enter a string: ");
    scanf("%s",a);
    
    while (a[l] != '\0') 
    {
        l++;
    }

    printf("Length of the string : %d\n", l);

    getch(); 
}    