#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int p,r,t,n;
float CI;
printf("Enter the value of principal P :");
scanf("%d",&p);
printf("Enter the value of rate R :");
scanf("%d",&r);
printf("Enter the value of time T :");
scanf("%d",&t);
printf("Enter the value of N");
scanf("%d",&n);
CI =p*pow(1+r/n,n*t);
printf("The value of compound interest is %f" ,CI);
getch();
}
    