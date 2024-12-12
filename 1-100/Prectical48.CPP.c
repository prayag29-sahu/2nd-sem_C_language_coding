#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter the first and second number:");
 scanf("%d%d",&a,&b);
 switch(a>b)
 {
  case 1 : printf("The greater number is a"); break;
  case 0 : printf("The greater number is b"); break;
  }
  getch();
  
}