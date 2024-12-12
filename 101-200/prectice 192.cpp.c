#include<stdio.h>
#include<conio.h>
void main()
{
void dub();
     dub();
 getch();
}
void dub()
{
 int i,n;
 clrscr();
 printf("Enter the number :");
 scanf("%d",&n);
 for(i=n;i<=n;i=i+1)
 {
   printf("\n %d*2=%d",i,i*2);
 }
}