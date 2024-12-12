#include <stdio.h>
#include <conio.h>

void main()
 {
    int arr[100], n, i;
    int l;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    l = arr[0];

    for (i = 1; i < n; i++) 
    {
        if (arr[i] > l) 
        {
            l = arr[i];
        }
    }

    printf("The largest element in the array is: %d", l);

    getch(); 
    
}