#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n);
 
 //i=2;
// i<=(n-1);
  {
   if((n%i)==0)
   { 
      
     printf("The number n is not a prime number");
   //  i=i+1;
   // goto l1;
   } 
  else
  
  {
 // if(i==n)
    printf("The number n is prime number");
  //  goto l1;
    }
  }
   // l1 :  
 getch();

}