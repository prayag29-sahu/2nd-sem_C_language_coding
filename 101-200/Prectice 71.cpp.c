#include<stdio.h>
#include<conio.h>
void main()
//prectice 71
{
 int n,i;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n);
 printf("The even numbers 0 to %d are :",n);
 i=0;
 l1 :
// while(i<=n)
if(i<=n)
 {
   printf("\n%d :",i);
   i=i+2;
   goto l1;
 }// while (i<=n);
 // printf("\n out ");  
 getch();

}