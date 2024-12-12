#include <stdio.h>
#include <conio.h>

void main()
{
    char d;
    int a, b;
    float c;

    printf("Enter an operation (+, -, *, /): ");
    d = getche(); // getche() reads a character and displays it on the screen simultaneously

    printf("\nEnter first and second number: ");
    scanf("%d", &a);

    // printf("Enter second number: ");
    scanf("%d", &b);

    if (d == '+')
    {
        c = a + b;
        printf("\n%d + %d = %f", a, b, c);
    }
    else

        if (d == '-')
    {
        c = a - b;
        printf("\n%d - %d = %f", a, b, c);
    }
    else

        if (d == '*')
    {
        c = a * b;
        printf("\n%d * %d = %f", a, b, c);
    }

    else

        if (d == '/')
    {
        if (b != 0)
        {
            c = (float)a / b;
            printf("\n%d / %d = %f", a, b, c);
        }
        else
        {
            printf("\nDivision by zero is undefined.");
        }
    }
    else
    {
        printf("\nInvalid.");
    }

    getch();
}