#include<stdio.h>
#include<conio.h>
void main()
//prectice 54
{
 int i,n;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n);
 //printf("The table of %d is : \n ",n);
 // scanf("%d",&m);
 i=2;
 //sum=0;
 
 while(i<=(n-1))
 //do
  {
   if((n%i)==0)
     
   { // break;
     printf("The number n is not a prime number",i);
     break;
  // sum=sum+i;
    }
   i=i+1;
  }// while(i<=10);
  //break;
 
  if(i==n)
    printf("The number n is prime number",i);
    
    
// printf("\n Sum of all even number from 1 to %d is = %d",n,sum);  
 getch();

}