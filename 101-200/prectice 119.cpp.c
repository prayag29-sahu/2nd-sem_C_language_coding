#include <stdio.h>
#include <conio.h>
//prectice 116
void main() 
{
 
    char a[] = "Prayag sahu";
    char *p;
    p = &a;
    
    
    //printf("Enter the number to want print name :");
   // scanf("%d",&n);
    // Print the string
    while(*p !='\0')
    {
    printf("%c", *p);
    p++;
    }
    

    getch(); 
    
}