#include<stdio.h>
#include<conio.h>
//prectice 61
void main()
{
 int n,i;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n);
 i=1;
 //while(i<=n)
 do
 {
   printf("\n%d :",i);
   i=i+2;
 } while (i<=n);
 // printf("\n out ");  
 getch();

}