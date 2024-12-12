#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, n, p;
    clrscr();
    printf("Enter any number :");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        p = 1;
        for (j = 2; j <= i / j; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (p)
        {
            printf("%d", i);
        }
    }

    return 0;
}
/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n, j;
  //  clrscr();
  printf("Enter any number :");
  scanf("%d", &n);
  for (i = 2; i <= n; i = i + 1)
  {
    for (j = 2; j <= i; j++)
    {
      if (i % j == 0)
        break;
    }
    if (i == j)
      printf("\n%d", j);
  }

  getch();
}
*/