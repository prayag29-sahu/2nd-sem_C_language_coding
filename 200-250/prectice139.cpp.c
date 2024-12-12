#include<stdio.h>
#include<conio.h>
#include<math.h>
//prectice 63
void main()
{
 
 float a,b,c;
 printf("enter any number :");
 scanf("%f",&a);
 b=(3.14/180)*a;
  c=pow(sin(b),2);
  printf("the sine valu is : %.2f",c);
  




/*
 int n,i,sum;
 clrscr();
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
 */
 getch();

}