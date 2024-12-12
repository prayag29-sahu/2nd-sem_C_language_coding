#include <stdio.h>
#include <conio.h>
void main()
{
  void table();
  table();
  getch();
}
void table()
{
  int i, n, result=0;
  // clrscr();
  printf("Enter the number to generate the table for:");
  scanf("%d", &n);
  printf("The table of %d is : \n ", n);
  i = 1;
  do
  {
    result = n + result;
    printf("\n%d*%d=%d:", n, i, result);
    i = i + 1;
  } while (i <= 10);
}