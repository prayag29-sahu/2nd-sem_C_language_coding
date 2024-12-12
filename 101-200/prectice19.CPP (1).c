#include <stdio.h>
#include <conio.h>

void main() 
{
     int Kelvin;
    float  celsius;

    printf("Enter temperature in Kelvin: ");
    scanf("%d", & Kelvin);

    celsius = Kelvin - 273.15;

    printf("Temperature in celsius: %.2f", celsius);

    getch(); 
    
}