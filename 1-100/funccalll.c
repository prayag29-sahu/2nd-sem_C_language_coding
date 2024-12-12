#include <stdio.h>
#include <conio.h>
// prectical 78

void sum()
{
    int a, b, add;
    printf("enter any two number=");
    scanf("%d%d", &a, &b);
    add = a + b;
    printf("The sum = %d\n", add);
    void sub();
    sub();
}
void sub()
{
    int a, b, sub;
    printf("enter any two number=");
    scanf("%d%d", &a, &b);
    sub = a - b;
    printf("The sum = %d\n", sub);
}
void main()
{
    //  clrscr();
    void sum();
    sum();
    getch();
}