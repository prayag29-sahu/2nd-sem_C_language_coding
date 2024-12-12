#include <stdio.h>
#include <conio.h>

int main() 
{
    int a, b,*p,*q;
    float c,*r;
     p=&a;
     q=&b;
     r=&c;
    printf("Enter two number: ");
    scanf("%d%d", &*p,&*q);

    *r = *p + *q;
    printf("\nAddition: %d + %d = %.2f",*p,*q,*r);

       *r = *p - *q;
    printf("\nSubtraction: %d - %d = %.2f",*p,*q,*r);

           *r = *p * *q;
    printf("\nMultiplication: %d * %d = %.2f", *p,*q,*r);

    if (*q != 0) 
    {
        *r = (float)*p / *q;
        printf("\nDivision: %d / %d = %.2f", *p,*q,*r);
    } else 
    {
        printf("\nDivision by zero is undefined.");
    }

    getch();
}