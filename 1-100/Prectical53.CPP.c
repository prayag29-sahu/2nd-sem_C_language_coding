#include <stdio.h>
#include <conio.h>

void main()
 {
  int d;
  clrscr();
  printf("Enter the digits:");
  scanf("%d",&d);
 // l1 :
   if(d==0)  
    {
     printf("zero");
     goto l1;
    }
   else
    {
     if(d==1)
     {
      printf("one");
      goto l1;
     }
     else
      {
      if(d==2)
       {
        printf("two");
         goto l1;
       }
       else
        {
         if(d==3)
          {
           printf("three");
           goto l1;
           }
          else
           {
            if(d==4)
             {
              printf("four");
              goto l1;
             }
            else
              {
               if(d==5)
               {
                printf("five");
                goto l1;
               }
               else
                {
                 if(d==6)
                  {
                   printf("six");
                   goto l1;
                  }
                 else
                   {
                    if(d==7)
                     {
                      printf("seven");
                      goto l1;
                     }
                    else
                     {
                      if(d==8)
                      {
                       printf("eight");
                       goto l1;
                      }
                       else
                        {
                         if(d==9)
                          {
                           printf("nine");
                           goto l1;
                          }
                         else
                          {
                           printf("Invalid input");
                           }
                           
                         }
                      }
                    }
                  }
                }
              }
            }
          }
    }
    
 l1 :
   getch();
    
}