#include <stdio.h>
#include <conio.h>

void main() 
{
    int rows, i, j;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    
    for (i = 1; i <= rows; i++) 
    {
        
        for (j = 1; j <= rows-i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    getch(); 
    
}