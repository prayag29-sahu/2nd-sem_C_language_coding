#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
switch (a>b)
{
 case 1 : switch (a>c)
  {
    case 0 : switch (c>a)
     {
       case 1 : printf("\n c is greater");
       break;
       case 0 : printf("\n a=c and is greater to b");
       break;
     }
    case 1 : printf("\n a is greater");
    break;
  }
   case 0 : switch (b>a)
  {
   case 1 : switch (b>c)
    {
     case 0 : switch (c>b) 
      {
       case 1 : printf("\n c is greater");
       break;
       case 0 : printf("\n c=b and is greater to a");
       break;
      }
     case 1 : printf("\n b is greater");
     break;
    }
   case 0 : printf("\n a=b and is greater to c");
   break;
  }
}

getch();
}









