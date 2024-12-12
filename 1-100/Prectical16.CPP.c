#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter two numbers :");
scanf("%d%d",&a,&b);
if(a>b)
  printf("The number a is greater");
else
 {
  if(b>a)
     printf("The number b is greater");  
  else 
     printf("Both numbers are equal");
  }   
  getch();
  
  }