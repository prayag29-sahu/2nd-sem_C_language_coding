#include<stdio.h>
#include<conio.h>
void main()
//Prectical 54
{ 
 clrscr();
 int i,n;
 i=0;
 printf("Enter any number :");
 scanf("%d",&n);
 printf("digits of 1 to %d :", n);
 while (i<n)
  {
   i=i+1;
   printf("%d", i);
   printf("\n");
  }

  getch();

}