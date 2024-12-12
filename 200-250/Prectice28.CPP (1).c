#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 printf("Enter the number :");
 scanf("%d",&n);
 switch (n%2==0)
 {
  case 1 : printf("The number is even number"); break;
  case 0 : printf("The number is odd number"); break;
 }
getch();
}