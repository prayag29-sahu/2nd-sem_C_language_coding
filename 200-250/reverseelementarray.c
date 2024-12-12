#include<stdio.h>
#include<conio.h>
void main()
//Prectical 72
{
    // clrscr();
    int i,a[10],t,n;
    printf("Enter the elements number =");
    scanf("%d",&n);
    printf("Enter elements =");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-i-1; i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("The reverse of a array is =\n");
    for(i=0; i<n; i++)
    {
    printf("%d\n",a[i]);
    }
    getch();
}