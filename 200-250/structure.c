#include <stdio.h>
#include <conio.h>
struct book
{
char name,price,pages;
};
struct book b;
//prectical 92
void main()
 {
  clrscr();
  printf("Enter book name ,price, pages =");
  scanf("%s%s%s",&b.name,&b.price,&b.pages);
  printf("book name = %s",b.name);
  printf("book price = %s",b.price);
  printf("book pages = %s",b.pages);  
    getch();
}