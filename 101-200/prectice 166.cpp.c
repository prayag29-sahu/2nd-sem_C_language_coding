#include <stdio.h>
#include <conio.h>
void main()
 {
    int *p,*q,n,i, result;
    p=&n;
    result=0;
    q=&result;
    
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
      *q += *p;
       printf("%d*%d= %d\n",*p,i, *q);
    }
    getch(); 
}