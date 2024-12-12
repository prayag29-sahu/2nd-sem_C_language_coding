#include <stdio.h>
#include <conio.h>

//prectice 65
void main()
 {
    int n, sum = 0, d;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    l1 :
    
    if ( n != 0)
     {
        //n /= 10;
        d = n % 10;
        sum += d;
        n /= 10;
        goto l1;
    }
    printf("Sum of digits = %d", sum);
    getch();
    
}