#include <stdio.h>
#include <conio.h>

void main()
 {
    int n, rs, rm;
    
    rs=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
     {
       rm = n % 10;
        rs = rs * 10 + rm;
       n /= 10;
    }

    printf("Reverse of the number: %d", rs);

    getch(); 
    
}