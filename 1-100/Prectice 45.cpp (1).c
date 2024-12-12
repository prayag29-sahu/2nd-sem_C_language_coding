#include <stdio.h>
#include <conio.h>
//Prectice 45
void main()
 {
    float a, b, c, result;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Enter the third number: ");
    scanf("%f", &c);


    if (b != 0 && c != 0)
     {
        result = a / b / c;
        printf("Division result: %.2f", result);
     }
    else
     {
        printf("Cannot divide by zero.");
    }

    getch(); 
}