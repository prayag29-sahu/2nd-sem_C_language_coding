#include <stdio.h>
#include <conio.h>

void main() 
{
     int sideLength;
    float surfaceArea;

    printf("Enter the side length of the cube: ");
    scanf("%d", &sideLength);

    surfaceArea = 6 * sideLength * sideLength;

    printf("Surface area of the cube: %.2f", surfaceArea);

    getch(); 
    
}