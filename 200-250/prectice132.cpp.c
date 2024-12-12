#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i;
printf("Enter any number :");
scanf("%d",&n);
for(i=0;i<1;i++)
{
if(n%2==0)
{
   printf("Enter number is even");
   break ;
   }
   printf("Enter number is odd ");
}   
   getch();



}