#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter any number :");
 scanf("%d",&n);
 //printf("The table of %d is : \n ",n);
 // scanf("%d",&m);
 //i=2;
 //sum=0;
 
 for(i=1;i<=n;i=i+1)
 //do
  {
   if((i%3)==0)
     
    // break;
   //continue;
   //else
     //printf("The number n is not a prime number",i);
     printf("\n%d",i);
     
  // sum=sum+i;
   continue;
  // i=i+1;
  }// while(i<=10);
  //break;
 
  //if(i==n)
  //  printf("The number n is prime number",i);
    
    
// printf("\n Sum of all even number from 1 to %d is = %d",n,sum);  
 getch();

}