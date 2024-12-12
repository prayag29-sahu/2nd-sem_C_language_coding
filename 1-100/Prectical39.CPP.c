#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,f;
 clrscr();
 printf("Enter the number to find the fectorial :");
 scanf("%d",&n);
// printf("\n the fectorial of %d is :\n ", n);
 
 i=1;
  f=1;
 while(i<=n)
 {
 //result += number; 
  // printf("\n %d×%d=%d\n", number,i,result);
  f=f*i;
   i=i+1;
 }
 printf("\n fectorial of  %d is : %d",n,f);
 getch();
 
 
 }