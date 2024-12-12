#include <stdio.h>
#include <conio.h>

// Global variables
int a,b;

void main() {
    int sum;
    printf("enter any two numbers : \n");
    scanf("%d%d",&a,&b);

    sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    getch();
}