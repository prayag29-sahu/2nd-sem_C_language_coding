#include<stdio.h>
#include<conio.h>
//prectice 63
void main()
{
 int n,i,sum;
//  clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sum);
 i=1;
 sum=0;
 //while(i<=n)
 do
 {
   //printf("\n%d :",i);
   sum=sum+i;
   i=i+2;
 }
 while (i<=n);
 printf("\n Sum of all odd number from 1 to n %d is %d",n,sum);  
 getch();

}