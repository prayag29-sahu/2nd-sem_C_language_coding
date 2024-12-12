#include <stdio.h>
#include <conio.h>

void main() 
{
    int n, i, j;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n-1; i++) 
    {
        
        for (j = 1; j <=n ; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    getch(); 
    
}