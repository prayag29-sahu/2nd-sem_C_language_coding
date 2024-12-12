#include <stdio.h>
#include <conio.h>
#include <math.h>
//prectice 44
void main()
 {
    double n, SR;

    printf("Enter a number: ");
    scanf("%lf", &n);


    SR = sqrt(n);

    printf("Square root of %.2lf is %.2lf", n, SR);

    getch(); 
    
}