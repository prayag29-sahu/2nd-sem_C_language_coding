#include <stdio.h>
#include <conio.h>
void main()
{
    char c;
    // clrscr();
    printf("\n\nPlease select any one option that you do :\n 1.Addition ENTER +.\n 2.Submation ENTER  -.\n 3.multiplication  ENTER *.\n4.Division ENTER / \n");
    scanf("%c", &c);
    if (c == '+')
    {
        void add();
        add();
    }
    else
    {
        if (c == '-')
        {
            void sub();
            sub();
        }
        else
        {
            if (c == '*')
            {
                void multi();
                multi();
            }
            else
            {
                if (c == '/')
                {
                    void div();
                    div();
                }

                else

                    printf("\nInvalid Input.");
            }
        }
    }
    getch();
}

void add()
{
    int a, b, sum;
    printf("Enter two numbers =");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("the sum = %d", sum);
}
void sub()
{
    int a, b, sub;
    printf("Enter two numbers =");
    scanf("%d%d", &a, &b);
    sub = a - b;
    printf("the sub = %d", sub);
}
void multi()
{
    int a, b, multi;
    printf("Enter two numbers =");
    scanf("%d%d", &a, &b);
    multi = a * b;
    printf("the multi = %d", multi);
}
void div()
{
    int a, b, div;
    printf("Enter two numbers =");
    scanf("%d%d", &a, &b);
    if (b == 0)
    {
        printf("Division of 0 not define.");
    }
    else
    {
        div = a / b;
        printf("the division = %d", div);
    }
}