#include <stdio.h>
#include <conio.h>
void main()
 {
    int *p,i,n,*q,multi=1;
    p=&i;
    q=& multi;
    clrscr();
    printf("Enter any number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    { 
    *q=*q**p;
   }
    printf("the multi of odd number is %d",*q);
    getch(); 
}