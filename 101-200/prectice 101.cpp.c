#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 { if (i%2==0)
   printf("\n%d :",i);
   continue;
 }
 // printf("\n out ");  
 getch();

}