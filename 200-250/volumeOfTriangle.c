#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int base, height;
float volume;
printf("Enter the value of base and height of the cone");
scanf("%d",&base);
scanf("%d",&height);
volume=(float)(0.5)*base*height;
printf("The volume of triangle is %f", volume);

getch();
}
    