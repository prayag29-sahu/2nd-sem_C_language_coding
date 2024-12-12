#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, b, c;
    printf("Enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    switch (a > b)
    {
    case 1:
        switch (a > c)
        {
        case 1:
            printf("the greater number is a");
            break;
        case 0:
            printf("the greater number is c");
        }
        break;
    case 0:
        switch (b > c)
        {
        case 1:
            printf("the greater number is b");
            break;
        case 0:
            printf("the greater number is c");
        }
        break;
    default:
        printf("Invalid number");
    }
    getch();
}
