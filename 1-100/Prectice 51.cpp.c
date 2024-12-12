#include<stdio.h>
#include<conio.h>
void main()
//prectice 51
{
 int n,i,sum;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sum);
 i=0;
 sum=0;
 while(i<=n)
 {
   //printf("\n%d :",i);
   sum=sum+i;
   i=i+1;
 }
 printf("\n Sum of all  number from 1 to  %d is %d",n,sum);  
 getch();

}