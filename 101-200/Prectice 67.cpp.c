#include<stdio.h>
#include<conio.h>
//prectice 67
void main()
{
 int n,i,sum;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n,&sum);
 i=1;
 sum=0;
 //while(i<=n)
 do
 {
   //printf("\n%d :",i);
   sum=sum+i;
   i=i+1;
 }
 while (i<=n);
 printf("\n Sum of natural numbers from 1 to %d is %d",n,sum);  
 getch();

}