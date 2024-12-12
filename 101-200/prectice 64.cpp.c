#include<stdio.h>
#include<conio.h>
//prectice 64
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
   i=i+1;
 }
 while (i<=n);
 printf("\n Sum of all number from 1 to n %d is %d",n,sum);  
 getch();

}