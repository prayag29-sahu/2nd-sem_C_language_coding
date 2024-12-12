#include<stdio.h>
#include<conio.h>
void main()
{
 void fect();
 fect();
}
//prectical 67
void fect()
{
 int i,n,f;
 clrscr();
 printf("Enter the number to find the fectorial :");
 scanf("%d",&n);
  i=1;
  f=1;
 do
 {
  f=f*i;
  i=i+1;
 }
 while(i<=n);
 printf("\n fectorial of  %d is : %d",n,f);
 getch();
 }