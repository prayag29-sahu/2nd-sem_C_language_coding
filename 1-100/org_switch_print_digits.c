#include<stdio.h>
#include<conio.h>
void main()
{
    // clrscr();
    int a;
    printf("enter any digit from 0-9:");
    scanf("%d",&a);
    switch (a==0)
    {
    case 1 :
        printf("zero");
        break;
    case 0 :
        switch(a==1)
        {
        case 1 :
            printf("one");
            break; 
        case 0 :
            switch(a==2)
            {
            case 1 :
                printf("two");
                break;
            case 0 :
                switch (a==3)
                {
                case 1 :
                    printf("three");
                    break;
                case 0 :
                    switch (a==4)
                    {
                    case 1 :
                        printf("four");
                        break;
                    case 0 :
                        switch (a==5)
                        {
                        case 1 :
                            printf("five");
                            break;
                        case 0 :
                            switch(a==6)
                            {
                            case 1 :
                                printf("six");
                                break;
                            case 0 :
                                switch (a==7)
                                {
                                case 1 :
                                    printf("seven");
                                    break;
                                case 0 :
                                    switch (a==8)
                                    {
                                    case 1 :
                                        printf("eight");
                                        break;
                                    case 0 :
                                        switch (a==9)
                                        {
                                        case 1 :
                                            printf("nine");
                                            break;
                                        case 0 :
                                            printf("invalid input");
                                            break;

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
    getch();
}    
    