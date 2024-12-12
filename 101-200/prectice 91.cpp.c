#include<stdio.h>
#include<conio.h>
void main()
//prectical 91
{
  int a[5],i;
  float average;
  clrscr();
  printf("Enter 5 elements of array");
  scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
  average = (float)(a[0]+a[1]+a[2]+a[3]+a[4])/5;
  printf("the average of array is : %f", average);
  getch();

}


