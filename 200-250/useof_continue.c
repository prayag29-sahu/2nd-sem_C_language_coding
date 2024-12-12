#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[5];
 clrscr();
 printf("enter any 5 number :");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 { if (a[i]%2==0)
   printf("\n%d ",a[i]);
   
   continue;
 }
 getch();

}