#include <stdio.h>
#include <conio.h>
//prectice 53
void main()
 {
    int a,b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a,&b);

    while (a != b) 
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    printf("GCD = %d", a);
    getch();
    
}