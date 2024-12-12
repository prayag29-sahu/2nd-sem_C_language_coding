#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter three different numbers :");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
 {
  if(a>c)
    printf("The greater number is a");
  else
    printf("the greater number is c");
 }
else
  {
   if(b>c) 
    printf("the greater number is b");
   else
    printf("the greater number is c");  
  } 
  getch();
}
 
