#include<stdio.h>
#include<conio.h>
//prectice 69
void main()
{
 int n,i,sum;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n,&sum);
 i=1;
 sum=0;
 l1 :
 //while(i<=n)
 if(i<=n)
 {
   //printf("\n%d :",i);
   sum=sum+i;
   i=i+2;
   goto l1;
 }
 //while (i<=n);
 printf("\n Sum of all odd numbers from 1 to %d is %d",n,sum);  
 getch();

}