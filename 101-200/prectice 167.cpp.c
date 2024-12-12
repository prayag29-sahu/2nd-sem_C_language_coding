#include <stdio.h>
#include <conio.h>
void main()
 {
    int *p,n,i,f;
    p=&f;
    f=1;
 //   q=&f;
    
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      *p=*p*i;
       printf("fect= %d\n",*p,i);
    }
    getch(); 
}