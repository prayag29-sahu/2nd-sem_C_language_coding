#include <stdio.h>
#include <conio.h>

//prectical 92
void main()
 {
    char a[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%s",a);;
    
    for (i=0; a[i] != '\0'; i++) 
    {
        if (a[i] >= 'a' && a[i] <= 'z')
         {
            a[i] = a[i] - ('a' - 'A');
        }
        else 
        if (a[i] >= 'A' && a[i] <= 'Z') 
        {
            a[i] = a[i] + ('a' - 'A');
        }
    }
    printf("convert case of string: %s\n", a);
    
    getch();
}