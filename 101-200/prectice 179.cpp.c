#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,*p,*q;
p=&a;
q=&b;
printf("Enter two different numbers:");
scanf("%d%d",&a,&b);
if(*p>*q) 
  printf("The number a is  greater number");
else 
  printf("The number b is greater number");
getch();
}
    