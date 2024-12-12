#include <stdio.h>
#include <conio.h>
// prectical 79
void main()
{
  int n, result;
  // clrscr();
  printf("enter any number =");
  scanf("%d", &n);
  result = fectorial(n);
  printf("the fectorial of %d is %d", n, result);
  getch();
}
int fectorial(int n)
{
  if (n == 0)
    return 1;
  else
    return n * fectorial(n - 1);
}