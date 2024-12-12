#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sum);
 //i=1;
 //sum=0;
 for(i=0,sum=0;i<=n;i=i+2)
 {
   //printf("\n%d :",i);
   sum=sum+i;
  // i=i+2;
 }
 printf("\n Sum of all even number from 1 to %d is = %d",n,sum);  
 getch();

}