#include <stdio.h>           // Include standard input/output library

int main() {                 // Main function starts
    int i, n, m;             // Declare variables: i for loop, n for number, m for range

    printf("Enter the value for n: ");   // Prompt user to enter the number
    scanf("%d", &n);                     // Read the number and store in variable n

    printf("Enter how many times to multiply (m): ");  // Prompt for multiplication range
    scanf("%d", &m);                                     // Read the range and store in m

    for (i = 0; i <= m; i++) {       // Loop from 0 to m (inclusive)
        printf("%d * %d = %d\n", i, n, i * n);  // Print multiplication result
    }

    return 0;                       // Return 0 to indicate successful execution
}
