#include <stdio.h>

int main() {
    int i, j, n, temp;
    int a[10];  // Array to hold up to 10 integers

    // Input number of elements
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sorting logic (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Swap a[i] and a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("The numbers arranged in ascending order are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
