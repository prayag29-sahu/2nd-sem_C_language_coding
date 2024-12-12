#include<stdio.h>
#include<conio.h>
void main()
{
 int m,c;
 float e;
 clrscr();
 printf("Enter the value of mass m :");
 scanf("%d",&m);
 printf("Enter the value of speed of light c :" );
 scanf("%d",&c);
 e= m * pow(c,2);
 printf("The Energy of the partical is : %.2f",e);
 getch();

}