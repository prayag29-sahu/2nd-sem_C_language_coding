#include <stdio.h>
#include <conio.h>
#include <math.h>
//Prectice27
void main()
 {

    int integer;
    float number,fractional;

    printf("Enter a number: ");
    scanf("%f", &number);

    integer = number;

    fractional = number - integer;

    printf("Fractional part of %.2f is %.2f", number,fractional);

    getch();
    
}