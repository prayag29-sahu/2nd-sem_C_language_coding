#include <stdio.h>
#include <conio.h>

// prectical 91
void main()
{
    char a[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", a);
    ;

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - ('a' - 'A');
        }
    }
    printf("Uppercase string: %s\n", a);

    getch();
}