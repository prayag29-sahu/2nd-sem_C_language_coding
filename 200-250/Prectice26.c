#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
 {
     int a,b,c;
    float d;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);
     
    printf("Enter the value of c:"); 
    scanf("%d", &c);

    // Calculate d = (a+b+c)³= a³+b³+c³+3((a+b)(b+c)(a+c))
    d = pow(a,3)+pow(b,3)+pow(c,3)+3*((a+b)*(b+c)*(a+c));

    printf("The value of d is %f",d);

    getch(); 
    
}