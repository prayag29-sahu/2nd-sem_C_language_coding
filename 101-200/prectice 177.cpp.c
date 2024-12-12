#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,*p;
p=&n;
printf("Enter any number :");
scanf("%d",&n);
if(*p<0)
   printf("Enter number is negetive");
   else
   printf("Enter number is positive ");
   getch();



}