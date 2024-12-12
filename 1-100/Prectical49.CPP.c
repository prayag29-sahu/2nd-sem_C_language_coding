#include <stdio.h>
#include <conio.h>

void main()
 {
    int i,n;
    clrscr();
     printf("enter the number"); 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     if(i%2==0)

         continue;
     else
     printf("\n%d",i);   
    }
   
   
    getch();
    
}