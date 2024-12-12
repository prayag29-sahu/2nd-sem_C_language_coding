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
if(n%5==0)
{
   printf("Enter number is divided by 5");
   break ;
   }
   printf("Enter number is not divided by 5");
}   
   getch();



}