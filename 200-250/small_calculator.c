#include <stdio.h>
#include <conio.h>

void main()
{
    char d;
    int a, b;
    float c;

    printf("Enter an operation (+, -, *, /): ");
    scanf("%c", &d);

    printf("\nEnter first and second number: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if (d == '+')
    {
        c = a + b;
        printf("\n%d + %d = %.2f", a, b, c);
    }
    else if (d == '-')
    {
        c = a - b;
        printf("\n%d - %d = %.2f", a, b, c);
    }
    else if (d == '*')
    {
        c = a * b;
        printf("\n%d * %d = %.2f", a, b, c);
    }
    else if (d == '/')
    {
        if (b != 0)
        {
            c = (float)a / b;
            printf("\n%d / %d = %.2f", a, b, c);
        }
        else
        {
            printf("\nDivision by zero is undefined.");
        }
    }
    else
    {
        printf("\nInvalid operation.");
    }

    getch();
}