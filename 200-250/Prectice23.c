#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
 {
     int a,b;
    float c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    c = pow(a+b,2);

    printf("The value of c is %f",c);

    getch(); 
    
}