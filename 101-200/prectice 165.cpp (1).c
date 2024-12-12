#include <stdio.h>
#include <conio.h>
void main()
 {
    int a[100],*p,*q,i,n,sum;
    p=&a;
    q=&sum;
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i,,,,]);
    }
    for(i=0;i<n;i++)
    { 
    *q=*q+*p;
    p++;
   }
    printf("the sum is %d",*q);
    getch(); 
}