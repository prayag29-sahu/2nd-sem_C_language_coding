#include <stdio.h>
#include <conio.h>
void main()
{
    void max();
    max();
    getch();
}
void max()
{
    int a[100], n, i;
    int l;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    l = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > l)
        {
            l = a[i];
        }
    }
    printf("The largest element in the array is: %d", l);
}