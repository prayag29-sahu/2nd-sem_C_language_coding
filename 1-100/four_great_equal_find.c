#include <stdio.h>
#include <conio.h>
void main()
// Program 32 to find greater number of four numbers
// in switch case in this method if any one is greater its realted all greater condition print where the number was greater
{
    int a, b, c, d;
    // clrscr();
    printf("enter four numbers:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    switch (a > b) //
    {              // open of if a>b
    case 1:
        switch (a > c) //
        {              // open of if a>c
        case 1:
            switch (a > d) //
            {
            case 1:
                printf("a is greater number ");
                break;
            case 0:
                switch (d > a) //
                {
                case 1:
                    printf("d is greater number ");
                    break;
                ////(d>a)
                case 0:
                    printf("a and d are equal and greater than b ,c ");
                    break;
                }
            }
        case 0:
            switch (c > a) //
            {
            case 1:
                switch (c > d) //
                {
                case 1:
                    printf("c is greater number ");
                    break;
                ////(c>d)
                case 0:
                    switch (d > c) //
                    {
                    case 1:
                        printf("d is greater number ");
                        break;
                    ////(d>c)
                    case 0:
                        printf("d and c are equal and greater than b,a ");
                        break;
                    }
                }

            case 0:
                switch (c > d) //
                {
                case 1:
                    printf("a=c>d ");
                    break;
                case 0:
                    switch (d > c) //
                    {
                    case 1:
                        printf("d is greater number ");
                        break;
                    ////(a>d)
                    case 0:
                        printf("a,c and d are equal ");
                        break;
                    }
                }
            }
        }
    case 0:
        switch (b > a) //
        {
        case 1:
            switch (b > c) //
            {
            case 1:
                switch (b > d) //
                {
                case 1:
                    printf("b is greater number ");
                    break;
                case 0:
                    switch (d > b) //
                    {
                    case 1:
                        printf("d is greater number ");
                        break;
                    ////(d>b)
                    case 0:
                        printf("b and d are equal and greater than a,c ");
                        break;
                    }
                }

            case 0:
                switch (c > b) //
                {
                case 1:
                    switch (c > d) //
                    {
                    case 1:
                        printf("c is greater number ");
                        break;
                        ////(c>d)

                    case 0:
                        switch (d > c) //
                        {
                        case 1:
                            printf("d is greater number ");
                            break;
                        ////(d>c)
                        case 0:
                            printf("c and d are equal and greater than a,b ");
                            break;
                        }
                    }
                    ////(c>b)

                case 0:
                    switch (c > d) //
                    {
                    case 1:
                        printf("c and b are equal and greater than d,a ");
                        break;
                        //// (c>d)

                    case 0:
                        switch (d > c) //
                        {
                        case 1:
                            printf("d is greater than b,c number ");
                            break;
                        ///(d>c)
                        case 0:
                            printf("a,b and d are equal and greater than c ");
                            break;
                        }
                    }
                }
            }
        case 0:
            switch (b > c) //
            {
            case 1:
                switch (b > d) //
                {
                case 1:
                    printf("a and b are equal and greater than c,d ");
                    break;
                    //(b>d)

                case 0:
                    switch (d > b) //
                    {
                    case 1:
                        printf("d is greater number ");
                        break;
                    ////(d>b)
                    case 0:
                        printf("a,b and d are equal and greater than c ");
                        break;
                    }
                }
                ////(b>c)

            case 0:
                switch (c > b) //
                {
                case 1:
                    switch (c > d) //
                    {
                    case 1:
                        printf("c is greater number ");
                        break;
                        ////(c>d)

                    case 0:
                        switch (d > c) //
                        {
                        case 1:
                            printf("d is greater number ");
                            break;
                        ////(d>c)
                        case 0:
                            printf("c and d are equal and greater than a,b ");
                            break;
                        }
                    }
                    ////(c>b)

                case 0:
                    switch (c > d) //
                    {
                    case 1:
                        printf("a,b and c are equal and greater than d ");
                        break;
                        ////(c>d)

                    case 0:
                        switch (d > c) //
                        {
                        case 1:
                            printf("d is greater number ");
                            break;
                        ////(d>c)
                        case 0:
                            printf("all numbers are equal ");
                            break;
                        }
                    }
                }
            }
        }
    }
    getch();
}