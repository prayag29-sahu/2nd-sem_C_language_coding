#include <stdio.h>
#include <conio.h>


void main()
 {
    int a,*p,i,b,*q,sum=0;
    //int *p;
    clrscr();
    p=&a;
    a=4;
    b=1;
    q=&b;
    sum=*p+*q;
    printf("the sum = %d",sum);
   /* printf("\na=%d",a);
    printf("\na=%d",p);
    printf("\np=%d",*p);
    printf("\na=%d",*p);
    printf("\n*p=%d",p);
    printf("\n*p=%d",a);
    printf("\np=%u",*p);
    printf("\na=%u",*p);
    printf("\n*p=%u",p);
    printf("\n*p=%u",a);
    printf("\na=%u",a);
    printf("\na=%u\n",p);
    printf("\np=%u\n",p);
    {
    i++;
    printf("\na=%d",a);
    printf("\na=%d",p);
    printf("\np=%d",*p);
    printf("\na=%d",*p);
    printf("\n*p=%d",p);
    printf("\n*p=%d",a);
    printf("\np=%u",*p);
    printf("\na=%u",*p);
    printf("\n*p=%u",p);
    printf("\n*p=%u",a);
    printf("\na=%u",a);
    printf("\na=%u",p);
    }*/
    getch(); 
}