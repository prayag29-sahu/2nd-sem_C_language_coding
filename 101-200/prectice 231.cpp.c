#include<stdio.h>
#include<conio.h>
void main()
{
 char a;
 char *p;
 p=&a;
 clrscr();
 printf("enter a charector : ");
 scanf("%d",&*p);
 *p=getch();
 printf("\n the ASCII value of %c is : %d",*p,*p);
 getch();
}