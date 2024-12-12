#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n, t = 0;
  clrscr();
  printf("Enter the number to generate the table for:");
  scanf("%d", &n);
  printf("The table of %d is : \n ", n);
  for (i = 1; i <= 10; i = i + 1)
  {
    t = t + n;
    printf("\n %d * %d = %d:", n,i, t);
  }
  getch();
}