#include<stdio.h>
#include<conio.h>
void main()
//Prectical 73
{
    // clrscr();
    int a[20],b[20],i=0, n,sum[20];
    printf("enter array size =");
    scanf("%d",&n);
    printf("enter first array elements =");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter second array elements =");
    for(i=0;i<n;i++)
    {scanf("%d",&b[i]);}
    printf("the sum of array =");
    for(i=0;i<n;i++)
    {sum[i]=a[i]+b[i];
    printf("%d\n",sum[i]);}
    getch();
}