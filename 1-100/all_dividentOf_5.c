#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n;
   clrscr();
  printf("Enter any number :");
  scanf("%d", &n);
  for (i = 1; i <= n; i = i + 1)
  {
    if ((i % 5) == 0)
      printf("\n%d", i);

    continue;
  }
  getch();
}