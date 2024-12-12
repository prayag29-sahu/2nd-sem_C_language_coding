#include <stdio.h>
#include <conio.h>
void main()
 {
    int a[100],*p,i,n,sum;
    p=a;
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { 
    sum=sum+a[i];
    p++;
   }
    printf("the sum is %d",sum);
    getch(); 
}