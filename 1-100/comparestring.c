#include <stdio.h>
#include <conio.h>

void main()
{
    char a[100], b[100];
    int i = 0, Equal = 1;

    printf("Enter the first string: ");
    scanf("%s", a);

    printf("Enter the second string: ");
    scanf("%s", b);

    while (a[i] != '\0')
    {
        while (b[i] != '\0')
        {
            if (a[i] != b[i])
            {
                Equal = 0;
            }
            i++;
        }
        break;
    }
    if (Equal)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    getch(); 
}