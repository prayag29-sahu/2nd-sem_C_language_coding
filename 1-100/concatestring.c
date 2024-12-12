#include <stdio.h>
#include <conio.h>
//prectical 90
void main()
 {
    char a[100],b[100],c[200];
    int i , j;
    clrscr();
    printf("Enter the first string: ");
    scanf("%s",a);
    printf("Enter the second string: ");
    scanf("%s",b);
    
    for (i=0; a[i] != '\0'; i++) 
    {
        c[i] = a[i];
    }
    
    for (j=0; b[j] != '\0'; i++, j++)
     {
        c[i] = b[j];
    }
    c[i] = '\0';
    printf("Concatenated string: %s\n",c);
    getch();
}