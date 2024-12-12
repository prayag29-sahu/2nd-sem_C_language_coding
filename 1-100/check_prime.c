#include <stdio.h>
#include <conio.h>
int main()
{
  int i, n;
  clrscr();
  printf("Enter any number :");
  scanf("%d", &n);
  for (i = 2; i <= n / 2; i = i + 1)
  {
    if (n % i == 0)
    {
      printf("The number %d is not a prime number", n);
      return 0;
    }
  }
  if (i = n)
    printf("The number %d is prime number", n);

  return 0;
}
/*
using level
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n;
  //  clrscr();
  printf("Enter any number :");
  scanf("%d", &n);
  for (i = 2; i <= n-1; i++)

  {
    if ((n % i) == 0)

    {
      printf("%d is not a prime number", n);
      goto l1;
    }
  }
l1:
  if (i == n)
    printf("%d is prime number", n);

  getch();
}

*/