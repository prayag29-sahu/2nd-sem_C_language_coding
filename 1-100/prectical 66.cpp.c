#include<stdio.h>
#include<conio.h>
void main()
{ 
char c;
clrscr();
printf("\n\nPlease select any one operation that you do :\n 1.Addition ENTER +.\n 2.Submation ENTER  -.\n 3.multiplication  ENTER *.\n4.Division ENTER / \n");
scanf("%c",&c);
                if(c=='+')
                {
                    void add();
                    add();
                }
                else
                {
                    if(c=='-')
                    {
                        void sub();
                        sub();
                    }
                    else
                    {
                        if(c=='*')
                        {
                            void multi();
                            multi();
                        }
                        else
                        {
                            if(c =='/')
                            { printf("The division of two numbers");
                             void div();
                             div();
                            }

                            else 
                            
                             printf("\nInvalid Input.");
                        }
                    }
                }
      getch();          
 }
 
 
 
 //CALCU.H
 
 void add()
 {
 int a,b,sum;
 printf("Enter two numbers =");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("the sum = %d",sum);
 getch();
 }
 void sub()
 {
 int a,b,sub;
 printf("Enter two numbers =");
 scanf("%d%d",&a,&b);
 sub=a-b;
 printf("the sub = %d",sub);
 getch();
 }
 void multi()
 {
 int a,b,multi;
 printf("Enter two numbers =");
 scanf("%d%d",&a,&b);
 multi=a*b;
 printf("the sun = %d",multi);
 getch();
 }
 void div()
 {
 int a,b,div;
 printf("Enter two numbers =");
 scanf("%d%d",&a,&b);
 div=a/b;
 printf("the sun = %d",div);
 getch();
 }