#include<stdio.h>
#include<conio.h>
void main()
//prectice 72
{
 int n,i;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n);
 printf("The odd numbers 1 to %d are :",n);
 i=1;
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