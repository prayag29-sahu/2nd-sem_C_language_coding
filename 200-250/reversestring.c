#include <stdio.h>
#include <conio.h>

void main()
{
    char a[100], r[100];
    int i, j = 0, l = 0;

    printf("Enter a string: ");
    scanf("%s", a);

    while (a[l] != '\0')
    {
        l++;
    }
    i = l - 1;
    while (i >= 0)
    {
        r[j] = a[i];
        i--;
        j++;
    }
    r[j] = '\0';

    printf("The reversed string is: %s\n", r);

    getch();
}