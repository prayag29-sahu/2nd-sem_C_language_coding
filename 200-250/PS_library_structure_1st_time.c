#include<stdio.h>
#include<conio.h>
/*
output ->

*------------------*& WLECOM To P S Library &*-------------------*
What can we help you , Please choose the any option that you want :
1.For Issue The Books ENTER 1.
2.For Return The Books ENTER 2.
3.Book Information ENTER 3.
4.Other Issue ENTER 4.
5.Exit.ENTER 5
1
Enter your ID number : 101

Your first name : Prayag
Your last name : Sahu
Your course : B.Tech
Your branch : CSE
Your semester : 2nd
Your ID number : 101
Enter which subject book you want : Math
This book is available
Which author book you want :Shukla

The Math book of shukla sir author is available.
The charge of this book is 50 rupees.
Do you want to this book ?
 If yes Enter 1.
 If No Enter 0.
1

You have issue Math book of shukla sir author for 3 month.

You have facility to give this book under 3 months.
 If you have not return it under the go
*/
struct library
{
    char b_name[10],au_name[20], p_book[5];
};
struct library l[100]= {{"Physics","Tiwari sir","30"},
    {"Math","shukla sir","50"},
    {"BCE","Dubey sir","45"},
    {"BME","Rai sir","30"},
    {"BCEEM","Khare sir","50"},
    {"English","Pathak sir","20"},
    {"EG","Anil sir","50"},
    {"BEEE","Choubey sir","30"},
    {"Chemistry","Dwivedi sir","35"},
    {"LetusC","Yashvant sir","50"}
};

void main()
{
    int n,i;
    // clrscr();
    printf("*------------------*& WLECOM To P S Library &*-------------------*");
    for(i=0; i<1; i++)
    {
        printf("\nWhat can we help you , Please choose the any option that you want :\n1.For Issue The Books ENTER 1.\n2.For Return The Books ENTER 2.\n3.Book Information ENTER 3.\n4.Other Issue ENTER 4.\n5.Exit.ENTER 5\n");
        scanf("%d",&n);
        if(n==1)
        {
            void b_issue();
            b_issue();
        }
        else
        {
            if(n==2)
            {
                void r_book();
                r_book();
            }
            else
            {
                if(n==4)
                {
                    void oth_issue();
                    oth_issue();
                }
                else
                {
                    if(n==3)
                    {
                        void b_details();
                        b_details();
                    }
                    else
                    {
                        if(n==5)
                        {
                            printf("Exit.");
                        }
                        else
                        {
                            printf("Invalid Input");
                        }
                    }
                }
            }
        }
    }
    getch();
}

void b_issue()
{
    int i,n=0,a,d,found=0,find=0;
    char subject[10],author[20];
    printf("Enter your ID number : ");
    scanf("%d",&d);
    if(d==101)
    {
        printf("\nYour first name : Prayag");
        printf("\nYour last name : Sahu");
        printf("\nYour course : B.Tech");
        printf("\nYour branch : CSE");
        printf("\nYour semester : 2nd");
        printf("\nYour ID number : 101");
        printf("\nEnter which subject book you want : ");
        scanf("%s",subject);
        for(i=0; i<10; i++)
        {
            if(l[i].b_name[i]==subject[i])
            {
                found=1;
                break;
            }
        }
        if(found)

        {
            printf("This book is available");
            printf("\nWhich author book you want :");
            scanf("%s",author);
            for(i=0; i<10; i++)
            {
                if(l[i].au_name[i]==author[i])
                {
                    find=1;
                    break;
                }
            }
            if(find)
            {
                printf("\nThe %s book of %s author is available.",l[i].b_name,l[i].au_name);
                {
                    printf("\nThe charge of this book is %s rupees.",l[i].p_book);
                    printf("\nDo you want to this book ?\n If yes Enter 1.\n If No Enter 0.\n");
                    scanf("%d",&a);
                    if(a==1)
                    {
                        printf("\nYou have issue %s book of %s author for 3 month.",l[i].b_name,l[i].au_name);
                        printf("\n\nYou have facility to give this book under 3 months.\n If you have not return it under the good condition you have pay extra charge.\n Thanks for coming please come again. ");
                    }
                    else
                    {
                        if(a==0)
                        {
                            printf("Thanks for coming.");
                        }
                        else
                        {
                            printf("Invalid answer.");
                        }
                    }
                }
            }//
            else
            {
                if(!find)
                    printf("This %s author book is not available ",l[i].au_name);
            }
        }
        else
        {
            if(!found)
                printf("This book is not available");
        }
    }

    else
    {
        if(d==102)
        {
            printf("\nYour first name : lucky");
            printf("\nYour last name : Yadav");
            printf("\nYour course : B.Tech");
            printf("\nYour branch : CSE");
            printf("\nYour semester : 2nd");
            printf("\nYour ID number: 102");
            printf("\nEnter which subject book you want : ");
            scanf("%s",subject);
            for(i=0; i<10; i++)
            {
                if(l[i].b_name[i]==subject[i])
                {
                    found=1;
                    break;
                }
            }
            if(found)
            {
                printf("This book is available");
                printf("\nWhich author book you want :");
                scanf("%s",author);
                for(i=0; i<10; i++)
                {
                    if(l[i].au_name[i]==author[i])
                    {
                        find=1;
                        break;
                    }
                }
                if(find)
                {
                    printf("\nThe %s book of %s author is available.",l[i].b_name,l[i].au_name);
                    {   //
                        printf("\nThe price of this book is %s rupees.",l[i].p_book);
                        printf("\nDo you want to this book ?\n If yes Enter 1.\n If No Enter 0\n");
                        scanf("%d",&a);
                        if(a==1)
                        {
                            printf("\nYou have issue %s book of %s author for 3 month.",l[i].b_name,l[i].au_name);
                            printf("\nYou have facility to give this book under 3 months.\n If you have not return it under the good condition you have pay extra charge.\n Thanks for coming please come again. ");
                        }
                        else
                        {
                            if(a==0)
                            {
                                printf("Thanks for coming.");
                            }
                            else
                            {
                                printf("Invalid answer.");
                            }
                        }
                    }
                }//
                else
                {
                    if(!find)
                        printf("This %s author book is not available ",l[i].au_name);
                }
            }
            else
            {
                if(!found)
                    printf("This book is not available");
            }
        }
        else
        {
            if(d==103)
            {
                printf("\nYour first name : Aditya");
                printf("\nYour last name : Patel");
                printf("\nYour course : B.Tech");
                printf("\nYour branch : CSE");
                printf("\nYour semester : 2nd");
                printf("\nYour ID : 101");
                printf("\nEnter which subject book you want : ");
                scanf("%s",subject);
                for(i=0; i<10; i++)
                {
                    if(l[i].b_name[i]==subject[i])
                    {
                        found=1;
                        break;
                    }
                }
                if(found)
                {
                    printf("This book is available");
                    printf("\nWhich author book you want :");
                    scanf("%s",author);
                    for(i=0; i<10; i++)
                    {
                        if(l[i].au_name[i]==author[i])
                        {
                            find=1;
                            break;
                        }
                    }
                    if(find)
                    {
                        printf("\nThe %s book of %s author is available.",l[i].b_name,l[i].au_name);
                        {   //
                            printf("\nThe price of this book is %s rupees.",l[i].p_book);
                            printf("\nDo you want to this book ?\n If yes Enter 1.\n If No Enter 0\n");
                            scanf("%d",&a);
                            if(a==1)
                            {
                                printf("\nYou have issue %s book of %s author for 3 month.",l[i].b_name,l[i].au_name);
                                printf("\nYou have facility to give this book under 3 months.\n If you have not return it under the good condition you have pay extra charge.\n Thanks for coming please come again. ");
                            }
                            else
                            {
                                if(a==0)
                                {
                                    printf("Thanks for coming.");
                                }
                                else
                                {
                                    printf("Invalid answer.");
                                }
                            }
                        }
                    }//
                    else
                    {
                        if(!find)
                            printf("This %s author book is not available ",l[i].au_name);
                    }
                }
                else
                {
                    if(!found)
                        printf("This book is not available");
                }
            }
            else
                printf("Invalid ID number");
            
        }        
        {
            printf("\nDid you want to carry on,If yes ,\nPlease choose the any option that you want :\n1.For Issue The Books ENTER 1.\n2.For Return The Books ENTER 2.\n3.Book Information ENTER 3.\n4.Other Issue ENTER 4.\n5.Exit ENTER 5.\n");
            scanf("%d",&n);
            if(n==1)
            {
                void b_issue();
                b_issue();
            }
            else
            {
                if(n==2)
                {
                    void r_book();
                    r_book();
                }
                else
                {
                    if(n==4)
                    {
                        void oth_issue();
                        oth_issue();
                    }
                    else
                    {
                        if(n==3)
                        {
                            void b_details();
                            b_details();
                        }
                        else
                        {
                            if(n==5)
                            {
                                printf("Exit.");
                            }
                            else
                                printf("Invalid Input");
                        }
                    }
                }
            }
        }
    }
    getch();
}
void r_book()
{
    int i,n,a,d,found=0,find=0;
    char subject[10],author[20];
    printf("Enter your ID number: ");
    scanf("%d",&d);
    if(d==101)
    {
        printf("\nYour first name : Prayag");
        printf("\nYour last name : Sahu");
        printf("\nYour course : B.Tech");
        printf("\nYour branch : CSE");
        printf("\nYour semester : 2nd");
        printf("\nYour ID number : 101");
        printf("\nYou have issue Maths book.");
        printf("\nchoose any one option :\n Return Enter 1.\nReplace by other Enter 2.\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("Thanks,come again ");
        }
        else
        {
            if(a==2)
            {
                printf("\nEnter which subject book you want : ");
                scanf("%s",subject);
                for(i=0; i<10; i++)
                {
                    if(l[i].b_name[i]==subject[i])
                    {
                        found=1;
                        break;
                    }
                }
                if(found)
                {
                    printf("This book is available");
                    printf("\nWhich author book you want :");
                    scanf("%s",author);
                    for(i=0; i<10; i++)
                    {
                        if(l[i].au_name[i]==author[i])
                        {
                            find=1;
                            break;
                        }
                    }
                    if(find)
                    {
                        printf("\nThe %s book of %s author is available.",l[i].b_name,l[i].au_name);
                        printf("\nThe price of this book is %s rupees.",l[i].p_book);
                        printf("\nDo you want to this book ?\n If yes Enter 1.\n If No Enter 0\n");
                        scanf("%d",&a);
                        if(a==1)
                        {
                            printf("\nYou have issue %s book of %s author for 3 month.",l[i].b_name,l[i].au_name);
                            printf("\nYou have facility to give this book under 3 months.\n If you have not return it under the good condition you have pay extra charge.\n Thanks for coming please come again. ");
                        }
                        else
                        {
                            if(a==0)
                            {
                                printf("Thanks for coming.");
                            }
                            else
                            {
                                printf("Invalid answer.");
                            }
                        }
                    }
                    else
                    {
                        if(!find)
                            printf("This %s author book is not available ",l[i].au_name);
                    }
                }
                else
                {
                    if(!found)
                        printf("This book is not available");
                }
            }
            else
                printf("Invalid Input.");
        }
    }
    else
    {
        if(d==102)
        {
            printf("\nYour first name : Aditya");
            printf("\nYour last name : Patel");
            printf("\nYour course : B.Tech");
            printf("\nYour branch : CSE");
            printf("\nYour semester : 2nd");
            printf("\nYour ID number : 102");
            printf("\nYou have issue BCE book.");
            printf("\nchoose any one option :\n Return Enter 1.\nReplace by other Enter 2.\n");
            scanf("%d",&a);
            if(a==1)
            {
                printf("Thanks,come again ");
            }
            else
            {
                if(a==2)
                {
                    printf("\nEnter which subject book you want : ");
                    scanf("%s",subject);
                    for(i=0; i<10; i++)
                    {
                        if(l[i].b_name[i]==subject[i])
                        {
                            found=1;
                            break;
                        }
                    }
                    if(found)
                    {
                        printf("This book is available");
                        printf("\nWhich author book you want :");
                        scanf("%s",author);
                        for(i=0; i<10; i++)
                        {
                            if(l[i].au_name[i]==author[i])
                            {
                                find=1;
                                break;
                            }
                        }
                        if(find)
                        {
                            printf("\nThe %s book of %s author is available.",l[i].b_name,l[i].au_name);
                            {   //
                                printf("\nThe price of this book is %s rupees.",l[i].p_book);
                                printf("\nDo you want to this book ?\n If yes Enter 1.\n If No Enter 0\n");
                                scanf("%d",&a);
                                if(a==1)
                                {
                                    printf("\nYou have issue %s book of %s author for 3 month.",l[i].b_name,l[i].au_name);
                                    printf("\nYou have facility to give this book under 3 months.\n If you have not return it under the good condition you have pay extra charge.\n Thanks for coming please come again. ");
                                }
                                else
                                {
                                    if(a==0)
                                    {
                                        printf("Thanks for coming.");
                                    }
                                    else
                                    {
                                        printf("Invalid answer.");
                                    }
                                }
                            }
                        }//
                        else
                        {
                            if(!find)
                                printf("This %s author book is not available ",l[i].au_name);
                        }
                    }
                    else
                    {
                        if(!found)
                            printf("This book is not available");
                    }
                }
                else
                    printf("Invalid Input.");
            }
        }
        else
        {
            if(d==103)
            {
                printf("\nYour first name : Lucky");
                printf("\nYour last name : Yadav");
                printf("\nYour course : B.Tech");
                printf("\nYour branch : CSE");
                printf("\nYour semester : 2nd");
                printf("\nYour ID number : 103");
                printf("\nYou have issue Physics book.");
                printf("\nchoose any one option :\n Return Enter 1.\nReplace by other Enter 2.\n");
                scanf("%d",&a);
                if(a==1)
                {
                    printf("Thanks,come again ");
                }
                else
                {
                    if(a==2)
                    {
                        printf("\nEnter which subject book you want : ");
                        scanf("%s",subject);
                        for(i=0; i<10; i++)
                        {
                            if(l[i].b_name[i]==subject[i])
                            {
                                found=1;
                                break;
                            }
                        }
                        if(found)
                        {
                            printf("This book is available");
                            printf("\nWhich author book you want :");
                            scanf("%s",author);
                            for(i=0; i<10; i++)
                            {
                                if(l[i].au_name[i]==author[i])
                                {
                                    find=1;
                                    break;
                                }
                            }
                            if(find)
                            {
                                printf("\nThe %s book of %s author is available.",l[i].b_name,l[i].au_name);
                                {   //
                                    printf("\nThe price of this book is %s rupees.",l[i].p_book);
                                    printf("\nDo you want to this book ?\n If yes Enter 1.\n If No Enter 0\n");
                                    scanf("%d",&a);
                                    if(a==1)
                                    {
                                        printf("\nYou have issue %s book of %s author for 3 month.",l[i].b_name,l[i].au_name);
                                        printf("\nYou have facility to give this book under 3 months.\n If you have not return it under the good condition you have pay extra charge.\n Thanks for coming please come again.\n ");
                                    }
                                    else
                                    {
                                        if(a==0)
                                        {
                                            printf("Thanks for coming.");
                                        }
                                        else
                                        {
                                            printf("Invalid answer.");
                                        }
                                    }
                                }
                            }//
                            else
                            {
                                if(!find)
                                    printf("This %s author book is not available ",l[i].au_name);
                            }
                        }
                        else
                        {
                            if(!found)
                                printf("This book is not available");
                        }
                    }
                    printf("Invalid Input.");

                }
            }

            else
                printf("Invalid ID number.");

        }
        {
            printf("\nDid you want to carry on,If yes ,\nPlease choose the any option that you want :\n1.For Issue The Books ENTER 1.\n2.For Return The Books ENTER 2.\n3.Book Information ENTER 3.\n4.Other Issue ENTER 4.\n5.Exit ENTER 5.\n");
            scanf("%d",&n);
            if(n==1)
            {
                void b_issue();
                b_issue();
            }
            else
            {
                if(n==2)
                {
                    void r_book();
                    r_book();
                }
                else
                {
                    if(n==4)
                    {
                        void oth_issue();
                        oth_issue();
                    }
                    else
                    {
                        if(n==3)
                        {
                            void b_details();
                            b_details();
                        }
                        else
                        {
                            if(n==5)
                            {
                                printf("Exit.");
                            }
                            else
                                printf("Invalid Input");
                        }
                    }
                }
            }
        }
    }
    getch();
}
void oth_issue()
{
    int i,n,d;
    char a[50],b[50];
    printf("How can we help you : select any option :\n");
    printf("1.Any opinion and advise ENTER 1.\n2.Payment Issue ENTER 2.");
    scanf("%d",&n);
    if(n==1)
    {
        printf("write you own opinion we try to provide the best facilities .\n ");
        scanf("%s",a);
        printf("Thanks for your opinion.");
    }
    else
    {
        if(n==2)
        {
            printf("What type of payment issue : choose any option :\n1.Extra charge related ENTER 1.\n2.For Payment Check ENTER 2.");
            scanf("%d",&d);
            if(d==1)
            {
                printf("In this case we advise you to please check the book informations and write your problem we will try to solve as soon as.\n");
            }
            else if(d==2)
            {
                printf("Enter your ID Number : ");
                scanf("%d",&n);
                printf("Enter your payment details.\n");
                scanf("%s",b);
                printf("\nThanks, We will try to solve your problem as soon as.\n ");
            }
            else
            {
                printf("Invalid Input.");
            }
        }
        else
        {
            printf("Invalid Input.");
        }

    }
    {
        printf("\nDid you want to carry on,If yes ,\nPlease choose the any option that you want :\n1.For Issue The Books ENTER 1.\n2.For Return The Books ENTER 2.\n3.Book Information ENTER 3.\n4.Other Issue ENTER 4.\n5.Exit ENTER 5.\n");
        scanf("%d",&n);
        if(n==1)
        {
            void b_issue();
            b_issue();
        }
        else
        {
            if(n==2)
            {
                void r_book();
                r_book();
            }
            else
            {
                if(n==4)
                {
                    void oth_issue();
                    oth_issue();
                }
                else
                {
                    if(n==3)
                    {
                        void b_details();
                        b_details();
                    }
                    else
                    {
                        if(n==5)
                        {
                            printf("Exit.");
                        }
                        else
                            printf("Invalid Input");
                    }
                }
            }
        }
    }
    getch();
}
void b_details()
{
    int i,n;
    for(i=0; i<10; i++)
    {
        printf("\nBook name : %s,  ",l[i].b_name);
        printf("Author name : %s,  ",l[i].au_name);
        printf("Price of book : %s  ",l[i].p_book);
    }
    {
        printf("\nDid you want to carry on,If yes ,\nPlease choose the any option that you want :\n1.For Issue The Books ENTER 1.\n2.For Return The Books ENTER 2.\n3.Book Information ENTER 3.\n4.Other Issue ENTER 4.\n5.Exit ENTER 5.\n");
        scanf("%d",&n);
        if(n==1)
        {
            void b_issue();
            b_issue();
        }
        else
        {
            if(n==2)
            {
                void r_book();
                r_book();
            }
            else
            {
                if(n==4)
                {
                    void oth_issue();
                    oth_issue();
                }
                else
                {
                    if(n==3)
                    {
                        void b_details();
                        b_details();
                    }
                    else
                    {
                        if(n==5)
                        {
                            printf("Exit.");
                        }
                        else
                            printf("Invalid Input");
                    }
                }
            }
        }
    }
    getch();
}