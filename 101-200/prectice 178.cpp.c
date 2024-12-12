#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,*p;
p=&n;
printf("Enter the value of n :");
scanf("%d",&n);
if(*p%2==0)
   printf("Enter number is even number.");
   else
   printf("Enter number is odd number. ");
   getch();



}