#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch(num1 > num2) {
        case 1:
            printf("The greater number is: %d", num1);
            break;
        case 0:
            printf("The greater number is: %d", num2);
            break;
        default:
            printf("Both numbers are equal.");
    }

    getch();
    
}