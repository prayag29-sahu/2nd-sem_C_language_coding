#include <stdio.h>
#include <conio.h>
void main()
// Prectical 72
{
    // clrscr();
    int a[20], b[20],n,i, c[20];
    printf("enter array size =");
    scanf("%d", &n);
    printf("enter first array elements =");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter second array elements =");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("the sum of array =");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", c[i]);
    }
    getch();
}