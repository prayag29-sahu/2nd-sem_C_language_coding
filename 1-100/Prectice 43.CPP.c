#include <stdio.h>
#include <conio.h>
 //prectice 43
void main()
 {
    int n, sum = 0, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
     {
        d = n % 10; 
        sum += d;   
        n /= 10;
    }

    printf("Sum of digits: %d", sum);

    getch(); 
    
}