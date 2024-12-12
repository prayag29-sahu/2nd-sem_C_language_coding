#include <stdio.h>
#include <conio.h>

// Global variables
int a,b;

void main() {
    int multi;
    printf("enter any two numbers : \n");
    scanf("%d%d",&a,&b);

    multi= a*b;

    printf("multi of %d and %d is %d\n", a, b, multi);

    getch(); 
}