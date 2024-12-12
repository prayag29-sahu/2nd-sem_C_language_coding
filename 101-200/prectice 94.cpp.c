#include <stdio.h>
#include <conio.h>

//prectice 94
void main()
 {
    int n, i, fTerm = 0, sTerm = 1, nTerm;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: \n", n);


    for (i = 1; i <= n; ++i)
     {
        printf("%d, ", fTerm);
        nTerm = fTerm + sTerm;
        fTerm = sTerm;
        sTerm = nTerm;
    }

    getch(); 
    
}