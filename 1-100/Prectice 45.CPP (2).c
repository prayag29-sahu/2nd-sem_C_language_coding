#include <stdio.h>
#include <conio.h>
// prectice 45
void main() {
    float num1, num2, num3, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);


    if (num2 != 0) {
        if (num3 != 0) {
            result = num1 / num2 / num3;
            printf("Division result: %.2f", result);
        } else {
            printf("Cannot divide by zero.");
        }
    } else {
        printf("Cannot divide by zero.");
    }

    getch();
    
}