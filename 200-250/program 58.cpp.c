#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array elements to -1
    }

    // Count the occurrence of each element
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark the occurrence of the element
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store the occurrence count in the frequency array
        }
    }

    // Print the occurrence of each element
    printf("Occurrence of elements in the array: \n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    getch(); // Wait for a key press before exiting
    return 0;
}