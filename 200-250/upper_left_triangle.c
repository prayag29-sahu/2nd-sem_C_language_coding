#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    //if rows n=3
//for 3 i=0 to i<=3
//i=1 to i<=3
//i=2 to i<=3
    for (i = 0; i <= n; i++)
    {
//j=0 to j<=3-0-1<=2
// j=1 to j<=3-1-1<=1
//j=2 to j<=3-2-1<=0
        for (j = 0; j <= n - i - 1; j++)
        {
            printf(" ");
        }
//j=0 to j<0
//j=1 to j<1
//j=2 to j<2
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}
/*

  *
 **
***


*/