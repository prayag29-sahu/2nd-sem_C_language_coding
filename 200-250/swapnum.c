#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: num1 = %d, num2 = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping: num1 = %d, num2 = %d", a, b);

    getch(); 
    return 0;
}