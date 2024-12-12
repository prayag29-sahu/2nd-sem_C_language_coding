#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,*p,*q,*r;
p=&a;
q=&b;
r=&c;
printf("Enter three different numbers :");
scanf("%d%d%d",&*p,&*q,&*r);
if(*p>*q)
 {
  if(*p>*r)
    printf("The greater number is a");
  else
    printf("the greater number is c");
 }
else
  {
   if(*q>*r) 
    printf("the greater number is b");
   else
    printf("the greater number is c");  
  } 
  getch();
}
 
