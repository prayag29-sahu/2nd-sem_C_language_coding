#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n, sum;
 clrscr();
 int add(int);
 printf("Enter any number :");
 scanf("%d",&n);
 sum=add(n);
 printf("The sum of all even is : %d",sum);
 getch();
}
int add(int n)
{
 int sum,i;
 for(i=1;i<=n;i=i+1)
 {
 sum=sum+i;
 }
 return(sum);
}