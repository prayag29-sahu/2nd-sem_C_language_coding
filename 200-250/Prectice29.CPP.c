#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter three numbers :");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
 {
  if(a<c)
   printf("The smaller number is a");
  else
    { 
     if(c<a)
      printf("The smaller number is c");
     else
      printf("a&c equal number and smaller than b");
    }
 }
else
  {
   if(b<a) 
    {
     if(b<c)
       printf("the smaller number is b");
     else
      // printf("the greater number is c");  
      {
       if(c<b)
         printf("The smaller number is c");
       else
         printf("c&b are equal and smaller than a");  
      }
    } 
   else
   {
    if(a<c)
     printf("a&b are equal and smaller than c");
     else
      {
       if(c<a)
         printf("The smaller number is c");
       else
         printf("a&b&c are equal numbers");
      }  
   }   
  }
  getch();
}
 
