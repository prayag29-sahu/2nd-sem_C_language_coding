#include <stdio.h>
#include <conio.h>


void main()
 {
    int t,i,multi;
    clrscr();
     multi=0;
    
    printf("Enter a number: ");
    scanf("%d", &t);
    printf("The first five multiples of %d are:\n", t);
    for (i = 1; i <= 5; i++)
     {
       multi=t*i;
        printf("%d\n", multi);
     }

    getch(); 
}