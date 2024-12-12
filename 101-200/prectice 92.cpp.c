#include<stdio.h>
#include<conio.h>
void main()
//prectice 92

{
  int a[5],i,max;
 // float average;
  clrscr();
  printf("Enter 5 elements of array");
  for (i=0;i<5;i++)
  {
  scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<5;i++)
  //average = (float)(a[0]+a[1]+a[2]+a[3]+a[4])/5;
  { 
   if (a[i]>max)
   max=a[i];
  }
  
  
  
  printf("the minimum of array is : %d", max);
  getch();

}

