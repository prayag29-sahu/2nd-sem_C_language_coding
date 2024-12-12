#include <stdio.h>
#include <conio.h>

void main()
 {
    int arr[100], n, i;
    int smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];

    for (i = 1; i < n; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }

    printf("The smallest element in the array is: %d", smallest);

    getch();
    
}