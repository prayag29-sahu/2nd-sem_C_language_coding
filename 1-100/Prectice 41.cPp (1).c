#include <stdio.h>
#include <conio.h>
// prectice 41


void main()
 {
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf("Result: %.2lf", result);

    getch();
}