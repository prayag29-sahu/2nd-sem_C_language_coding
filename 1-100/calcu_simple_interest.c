#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int p,r,t;
float SI;
printf("Enter the value of principal P :");
scanf("%d",&p);
printf("Enter the value of rate R :");
scanf("%d",&r);
printf("Enter the value of time T :");
scanf("%d",&t);
SI = (float)(p*r*t)/100;
printf("The value of simple interest is %f" ,SI);
getch();
}
    