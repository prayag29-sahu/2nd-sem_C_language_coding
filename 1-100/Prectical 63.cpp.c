#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        for (k = 0; k <= 2 * i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch(); 
}