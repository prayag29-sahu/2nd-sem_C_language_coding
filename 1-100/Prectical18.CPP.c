#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter three numbers :");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
 {
  if(a>c)
   printf("The greater number is a");
  else
    { 
     if(c>a)
      printf("The greater number is c");
     else
      printf("a&c equal number and greater than b");
    }
 }
else
  {
   if(b>a) 
    {
     if(b>c)
       printf("the greater number is b");
     else
      {
       if(c>b)
         printf("The greater number is c");
       else
         printf("c&b are equal and greater than a");  
      }
    } 
   else
   {
    if(a>c)
     printf("a&b are equal and greater than c");
     else
      {
       if(c>a)
         printf("The greater number is c");
       else
         printf("a&b&c are equal numbers");
      }  
   }   
  }
  getch();
}
 
