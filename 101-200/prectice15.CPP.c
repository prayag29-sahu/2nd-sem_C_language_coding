#include <stdio.h>
#include <conio.h>

void main() 
{
     int current, resistance;
    float  voltage;

    printf("Enter the value of current in circuit : ");
    scanf("%d", &current);
    printf("Enter the value of resistance in circuit : ");
    scanf("%d",&resistance);
    
    
    voltage = current * resistance;

    printf("The value of voltage in circuit : %f", voltage);

    getch(); 
    
}