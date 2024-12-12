#include<stdio.h>
#include<conio.h>

void main()
{
    void avg();
    avg();
    getch();
}
void avg()
{
clrscr();
int a[100],i,n,sum;
float avg;
printf("enter array size =");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
sum=sum+i;
}
avg=(float )sum/n;
printf("the average = %f",avg);
getch();

}