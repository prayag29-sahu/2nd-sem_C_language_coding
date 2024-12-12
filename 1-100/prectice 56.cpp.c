#include <stdio.h>
#include <conio.h>

//prectice 56
void main()
 {
    int n, sum = 0, d;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10)
     {
        d = n % 10;
        sum += d;
    }
    printf("Sum of digits = %d", sum);
    getch();
    
}