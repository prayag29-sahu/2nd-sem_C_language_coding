#include <stdio.h>
#include <conio.h>

// Global variables
int a,b;

void main() {
    int sub;
    printf("enter any two numbers : \n");
    scanf("%d%d",&a,&b);

    sub = a - b;

    printf("Sub of %d and %d is %d\n", a, b, sub);

    getch(); 
}