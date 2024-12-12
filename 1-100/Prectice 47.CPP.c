#include <stdio.h>
#include <conio.h>
// prectice 47
void main() {
    float num1, num2, num3, num4, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    printf("Enter the fourth number: ");
    scanf("%f", &num4);

    switch (num1 != 0) 
    {
        case 1:
            switch (num2 != 0)
             {
                case 1:
                    switch (num3 != 0) 
                    {
                        case 1:
                            switch (num4 != 0) 
                            {
                                case 1:
                                    result = num1 * num2 * num3 * num4;
                                    printf("Multiplication result: %.2f", result);
                                    break;
                                case 0 :
                                    printf(" multiply by zero is 0.");
                                    break;
                            }
                           break;
                        case 0 :
                            printf(" multiply by zero is 0.");
                            break;
                    }
                    break;
                case 0 :
                    printf(" multiply by zero is 0.");
                    break;
            }
            break;
        case 0 :
            printf("C multiply by zero is 0.");
            break;
    }

    getch(); // Wait for a key press before exiting
    
}