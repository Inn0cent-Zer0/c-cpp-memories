#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // Array to hold up to 100 elements

    // Input number of elements
    printf("Enter the number of elements (1–100): ");
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    for (i = 1; i < n; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];  // Store the largest value in arr[0]
        }
    }

    // Output the largest element
    printf("Largest element = %d\n", arr[0]);

    return 0;
}
