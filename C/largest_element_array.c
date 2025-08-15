#include <stdio.h>  // Include standard input/output functions

int main() {        // Main function starts
    int n;          // Variable to store number of elements
    int arr[100];   // Array to store up to 100 integers

    // Prompt user to enter number of elements
    printf("Enter the number of elements (1–100): ");
    scanf("%d", &n);

    // Input validation (optional but good practice)
    if (n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Loop to read array elements
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];  // Store the largest value in arr[0]
        }
    }

    // Print the largest element
    printf("Largest element = %d\n", arr[0]);

    return 0;  // Successful execution
}
