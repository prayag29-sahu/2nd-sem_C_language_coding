#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
 {
    float number;
    int integerPart;
    float fractionalPart;

    printf("Enter a number: ");
    scanf("%f", &number);


    integerPart = (int) number;

    fractionalPart = number - integerPart;

    printf("Fractional part of %.2f is %.2f", number, fractionalPart);

    getch(); 
    
}