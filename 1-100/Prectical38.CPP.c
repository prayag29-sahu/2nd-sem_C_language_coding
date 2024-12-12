#include<stdio.h>
#include<conio.h>
void main()
{
 int i,number,result=0;
//  clrscr();
 printf("Enter the number to generate the table for:");
 scanf("%d",&number);
 printf("\n the table of  %d is :\n ", number);
 
 i=1;
 // number=0;
 while(i<=10)
 {
   result = number + result;
   printf("\n %d*%d=%d\n", number, i, result);
   // sum=sum+i;
   i=i+1;
 }
// printf("\n the table of given number %d is :\n %d", number);
 getch();
 
 
 }