#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sum);
 i=1;
 sum=0;
 while(i<=n)
 {
   sum=sum+i;
   i=i+2;
 }
 printf("\n Sum of all odd number from 1 to n %d is %d",n,sum);  
 getch();

}