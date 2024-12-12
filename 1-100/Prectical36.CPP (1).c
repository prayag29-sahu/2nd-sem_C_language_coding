#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n);
 i=0;
 while(i<=n)
 {
   printf("\n%d :",i);
   i=i+2;
 }
 // printf("\n out ");  
 getch();

}