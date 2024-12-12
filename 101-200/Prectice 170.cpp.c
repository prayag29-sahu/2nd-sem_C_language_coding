#include <stdio.h>
#include <conio.h>
void main()
 {
    int *p,n,i,j,*q;
    p=&i;
    q=&j;
  //  f=1;
 //   q=&f;
    
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    //  *q=*p*2;
      for(j=2;j<=i;j++)
      {
      if(*p%*q==0)
      break;
      }
      if(*p==*q)
       printf(" %d\n",*q);
       
    }
  //  printf("fectorial of %d = %d\n",n,*p,i);
    getch(); 
}