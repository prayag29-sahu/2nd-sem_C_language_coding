#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], *p, i, n;
    p = &a;
    // clrscr();
    printf("enter the size ");
    scanf("%d", &n);
    printf("enter elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the elements are  ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    getch();
}