#include<stdio.h>
#include<conio.h>
//prectice 62
void main()
{
 int n,i,sum;
//  clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sum);
 i=0;
 sum=0;
 //while(i<=n)
 do
 {
   //printf("\n%d :",i);
   sum=sum+i;
   i=i+2;
 }
 while (i<=n);
 printf("\n Sum of all even number from 1 to n %d is %d",n,sum);  
 getch();

}