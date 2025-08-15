// simpsons_one_third_rule.c
// --------------------------------------------------
// 📐 Simpson's 1/3 Rule for numerical integration
// ⚠️ Works in Turbo C / DOSBox due to clrscr() and getch()
// --------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float x[10], y[10], sum = 0, h;
    int i, n, k = 0;

    // Clear screen (Turbo C only)
    clrscr();

    // Input number of data points
    printf("How many records will you enter? ");
    scanf("%d", &n);

    // Input x and f(x) values
    for (i = 0; i < n; i++) {
        printf("Enter the value of x%d: ", i);
        scanf("%f", &x[i]);

        printf("Enter the value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }

    // Step size (assuming uniform spacing)
    h = x[1] - x[0];

    // Simpson's 1/3 Rule calculation
    sum = y[0];  // First term

    for (i = 1; i < n - 1; i++) {
        if (k == 0) {
            sum += 4 * y[i];  // Odd indices
            k = 1;
        } else {
            sum += 2 * y[i];  // Even indices
            k = 0;
        }
    }

    sum += y[n - 1];  // Last term
    sum = sum * (h / 3);

    // Output result
    printf("\n\nApproximate integral = %.4f\n", sum);

    getch();  // Turbo C only
    return 0;
}
