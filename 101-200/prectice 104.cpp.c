#include <stdio.h>
#include <conio.h>

// Global variables
int a = 62;
int b = 34;

void main() {
    int sub;

    sub = a - b;

    printf("Sub of %d and %d is %d\n", a, b, sub);

    getch();
}