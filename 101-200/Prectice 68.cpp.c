#include<stdio.h>
#include<conio.h>
//prectice 68
void main()
{
 int n,i,sum;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n,&sum);
 i=0;
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
 printf("\n Sum of all even numbers from 1 to %d is %d",n,sum);  
 getch();

}