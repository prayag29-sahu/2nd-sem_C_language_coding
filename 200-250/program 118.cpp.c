#include <stdio.h>
#include <conio.h>
//prectice 116
void main() 
{
    // Declare and initialize a string
    char a[] = "Prayag sahu";
    int n,i=0;
    
    printf("Enter the number to want print name :");
    scanf("%d",&n);
    // Print the string
    while(i<n)
    {
    printf("%s\n", a);
    i++;
    }
    /*
    printf("\n");
    i=0;
    while (a[i] !='\0')
    { 
     printf("%c",a[i]);
     i++;
    }
    printf("\n");
*/
    getch(); // Wait for a key press before exiting
    
}