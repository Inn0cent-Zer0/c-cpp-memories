#include <stdio.h>           // Include standard input/output functions

void swap(int *a, int *b);   // Function prototype for swapping two integers

int main() {                 // Main function starts
    int x = 234, y = 432;    // Declare and initialize two integers

    printf("\nBefore swapping:\nx = %d, y = %d\n", x, y);  // Print original values

    swap(&x, &y);            // Call swap function with addresses of x and y

    printf("\nAfter swapping:\nx = %d, y = %d\n", x, y);   // Print swapped values

    return 0;                // Return 0 to indicate successful execution
}

void swap(int *a, int *b) {  // Function to swap values using pointers
    int t;                   // Temporary variable to hold one value
    t = *a;                  // Store value pointed by a in t
    *a = *b;                 // Assign value pointed by b to location pointed by a
    *b = t;                  // Assign value in t to location pointed by b
}
