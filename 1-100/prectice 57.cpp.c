#include <stdio.h>
#include <conio.h>
//prectice 57
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    getch();
    return 0;
}