#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100], r[100];
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        r[i] = a[n - i - 1];
    }

    printf("The reversed array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", r[i]);
    }
    printf("\n");

    getch();
}