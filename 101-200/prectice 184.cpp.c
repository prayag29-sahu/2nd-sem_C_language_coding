#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p,*q;
p=&a;
q=&b;
printf("Enter two numbers :");
scanf("%d%d",&*p,&*q);
if(*p<*q)
  printf("The number a is smaller");
else
 {
  if(*q<*p)
     printf("The number b is smaller");  
  else 
     printf("Both numbers are equal");
  }   
  getch();
  
  }