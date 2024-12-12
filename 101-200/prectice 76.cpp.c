#include <stdio.h>
#include <conio.h>
//prectical 76

void main()
{
    int a[5], n,i,j,t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

     for ( i = 0; i < n; i++)
        {
            for (j = i; j < n-1; j++)
            {
                if (a[i] > a[j+1])
                {
                     t = a[i];
                    a[i] = a[j+1];
                    a[j+1] = t;
                }
            }
        }
    

    printf("Array in ascending order:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    getch();
}