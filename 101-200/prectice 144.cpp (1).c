#include<stdio.h>
#include<conio.h>
//#include<math.h>
//prectice 63
void main()
{
 int dr,hr,bs,gs;
 printf("Etnter basic salary :");
 scanf("%d",&bs);
 dr=(bs*40)/100;
 hr=(bs*20)/100;
 gs=dr+hr;
 printf("The gross salary is : %d+%d=%d",dr,hr,gs);





 /*
 float a,b,c;
 printf("enter any number :");
 scanf("%f",&a);
 b=(3.14/180)*a;
  c=cos(b);
  printf("the sine valu is : %f",c);
  
 int n,i,sum;
 clrscr();
 printf("The value of n :");
 scanf("%d",&n,&sum);
 i=1;
 sum=0;
 //while(i<=n)
 do
 {
   //printf("\n%d :",i);
   sum=sum+i;
   i=i+2;
 }
 while (i<=n);
 printf("\n Sum of all odd number from 1 to n %d is %d",n,sum);  
 */
 getch();

}