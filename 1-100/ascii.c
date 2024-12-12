#include <stdio.h>
#include <conio.h>
//print ascii char and working of getch
int main() {
    char ch;
    
    printf("Enter a character: ");
    // ch = getch();
    scanf("%c", &ch);

    printf("The ASCII value of %c is: %d", ch, ch);
    
    getch(); 
    return 0;
}