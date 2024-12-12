#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int year,i;
printf("Enter any year :");
scanf("%d",&year);
for(i=0;i<1;i++)
{
if(year%4==0)
{
if(year%100!=0)
{
   printf("Enter year is leap.");
  
   }
   break;
   }
   printf("Enter year is not leap");
}   
   getch();



}