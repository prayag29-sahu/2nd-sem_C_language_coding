#include <stdio.h>
#include <conio.h>

void main()
 {
    int a[100], n, i, search;
    int found=0;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    printf("enter an element that you search :");
    scanf("%d",& search);
    for (i=0;i<n;i++)
    {
     if(a[i]==search)
      {
      found=1;
      break;
      }
    }
    if(found)
    printf("the element %d found at index %d", search,i);
    else 
    printf("the element %d not found", search);

    getch(); 
    
}