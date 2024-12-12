#include <stdio.h>
#include <conio.h>

void main() 
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        
        for (j = 0; j < i; j++)
         {
            printf(" ");
        }
        
        for (j = 0; j < n - i; j++)
         {
            printf("*");
        }
        printf("\n");
    }


   getch(); 
}