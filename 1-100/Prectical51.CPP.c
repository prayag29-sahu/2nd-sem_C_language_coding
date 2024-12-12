#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter the number to generate the table for:");
 scanf("%d",&n);
 printf("The table of %d is : \n ",n);
 // scanf("%d",&m);
 i=1;
 //i<=10;
 //l1 :
 //sum=0;
 //for(i=1;i<=10;i=i+1)
 // l1 :
 {
 do
  {
   printf("\n %d*%d=%d:",n,i,n*i);
  // sum=sum+i;
   i=i+1;
  // goto l1;
  } while(i<=10);
  goto l1;
  }
  l1 :
// printf("\n Sum of all even number from 1 to %d is = %d",n,sum);  
 getch();

}