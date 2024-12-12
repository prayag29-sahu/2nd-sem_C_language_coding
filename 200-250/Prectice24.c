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

    // Calculate d = (a+b+c)²= a²+b²+c²+2(ab+bc+ac)
    d = pow(a,2)+pow(b,2)+pow(c,2)+2*(a*b+b*c+a*c);

    printf("The value of d is %f",d);

    getch(); 
    
}