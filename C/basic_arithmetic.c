#include <stdio.h>

int main() {
    int val1, val2, Rem, Result;

    // Prompt user for first value
    printf("Enter the first value: ");
    scanf("%d", &val1);

    // Prompt user for second value
    printf("Enter the second value: ");
    scanf("%d", &val2);

    // Addition
    Result = val1 + val2;
    printf("Sum: %d\n", Result);

    // Subtraction
    Result = val1 - val2;
    printf("Difference: %d\n", Result);

    // Multiplication
    Result = val1 * val2;
    printf("Product: %d\n", Result);

    // Division (check for divide-by-zero)
    if (val2 != 0) {
        Result = val1 / val2;
        Rem = val1 % val2;
        printf("Quotient: %d\n", Result);
        printf("Remainder: %d\n", Rem);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
