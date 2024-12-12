#include <stdio.h>
#include <conio.h>

void main()
{
    int a, *p, i;
    // int *p;
    // clrscr();
    p = &a;
    a = 4;
    printf("\na=%d", a);
    // printf("\na=%d",p);
    //  printf("\np=%d",*p);
    printf("\na=%d", *p);
    // printf("\n*p=%d",p);
    // printf("\n*p=%d",a);
    // printf("\np=%u",*p);
    // printf("\na=%u",*p);
    // printf("\n*p=%u",p);
    //  printf("\n*p=%u",a);
    // printf("\na=%u",a);
    //  printf("\na=%u",p);
    printf("\np=%u", p);
    printf("\n&a=%u\n", &a);

    i = i + 1;
    printf("\na=%d", a);
    // printf("\na=%d",p);
    // printf("\np=%d",*p);
    printf("\na=%d", *p);
    //   printf("\n*p=%d",p);
    //  printf("\n*p=%d",a);
    //  printf("\np=%u",*p);
    //  printf("\na=%u",*p);
    //  printf("\n*p=%u",p);
    //  printf("\n*p=%u",a);
    // printf("\na=%u",a);
    //  printf("\na=%u",p);
    printf("\np=%u", p);
    printf("\n&a=%u\n", &a);

    getch();
}