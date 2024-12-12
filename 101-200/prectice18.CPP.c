#include <stdio.h>
#include <conio.h>

void main() 
{
     int celsius;
    float  kelvin;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    kelvin = celsius + 273.15;

    printf("Temperature in Kelvin: %f", kelvin);

    getch();
    
}