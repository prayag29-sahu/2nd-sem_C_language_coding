#include<stdio.h>
#include<conio.h>
void main()
//prectice 52
{
 int n,i,sub;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sub);
 i=0;
 sub=0;
 while(i<=n)
 {
   //printf("\n%d :",i);
   sub=sub-i;
   i=i+1;
 }
 printf("\n sub of all  number from 1 to  %d is %d",n,sub);  
 getch();

}