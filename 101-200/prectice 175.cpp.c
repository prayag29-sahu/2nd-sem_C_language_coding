#include <stdio.h>
#include <conio.h>
void main()
 {
    int *p,i,n,*q,sub=0;
    p=&i;
    q=&sub;
    clrscr();
    printf("Enter any number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    { 
    *q=*q-*p;
   }
    printf("the sub of odd is %d",*q);
    getch(); 
}