#include <stdio.h>
#include <conio.h>
// prectical 76

void main()
{
    int a[5], n, i, j, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    getch();
}