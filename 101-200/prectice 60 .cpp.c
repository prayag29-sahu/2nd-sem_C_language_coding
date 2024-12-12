#include<stdio.h>
#include<conio.h>
void main()
//prectice 60
{
 int n,i;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n);
 i=0;
// while(i<=n)
do
 {
   printf("\n%d :",i);
   i=i+2;
 } while (i<=n);
 // printf("\n out ");  
 getch();

}