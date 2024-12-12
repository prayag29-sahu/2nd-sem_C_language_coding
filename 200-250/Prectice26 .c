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
     
   // printf("Enter the value of c:"); 
   // scanf("%d", &c);

    // Calculate d = (a+b)³= a³+b³+3a²b+3ab²
    c = pow(a,3)+pow(b,3)+3*(pow(a,2)*b)+3*(a*pow(b,2));

    printf("The value of c is %f",c);

    getch(); 
    
}