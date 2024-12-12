#include <stdio.h>
#include <conio.h>
// prectical 89
void main()
{
    char a[100];
    int l, found;
    l = 0;
    found = 1;

    printf("Enter a string: ");
    scanf("%s", a);

    while (a[l] != '\0')
    {
        l++;
    }

    for (int i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - i - 1])
        {
            found = 0;
            break;
        }
    }

    if (found)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    getch();
}