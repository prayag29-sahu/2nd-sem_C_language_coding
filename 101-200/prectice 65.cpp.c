#include<stdio.h>
#include<conio.h>
void main()
//prectice 65
{
 int i,n;
 clrscr();
// i=1;
 printf("Number the number n:");
 scanf("%d",&n);
 //while(i<=n)
 
 i=1;
 l1 :
 if(i<=n)
 {
   printf("\n%d",i);
   i=i+1;
   goto l1;
 }
 // printf("\n out ");  
 getch();

}