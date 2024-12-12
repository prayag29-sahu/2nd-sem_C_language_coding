#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
 {
     int radius, height;
    float volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%d", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    volume = 3.14 * pow(radius, 2) * height;

    printf("Volume of the cylinder: %.2f", volume);

    getch();
    
}