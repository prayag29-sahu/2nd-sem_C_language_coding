#include <stdio.h>
#include <conio.h>
void main()
 {
    int *p,n,i,d,*q;
    p=&i;
    q=&d;
  //  f=1;
 //   q=&f;
    
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      *q=*p*2;
      
       printf("%d*2= %d\n",i,*q);
    }
  //  printf("fectorial of %d = %d\n",n,*p,i);
    getch(); 
}