// quadratic_solver.c
// ---------------------------------------------
// 🧮 Solves quadratic equations of the form ax² + bx + c = 0
// Handles real & distinct, real & equal, and complex roots
// ---------------------------------------------

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    float r1, r2, rnum, inum;

    printf("\nEnter the coefficients a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);  // Discriminant

    if (d < 0) {
        // Complex roots
        printf("\nRoots are complex numbers\n");
        rnum = -b / (2 * a);
        inum = sqrt(-d) / (2 * a);
        printf("Root1 = %.3f + i%.3f\n", rnum, inum);
        printf("Root2 = %.3f - i%.3f\n", rnum, inum);
    } else if (d == 0) {
        // Real and equal roots
        printf("\nThe roots are real and equal\n");
        r1 = -b / (2 * a);
        printf("Root = %.3f\n", r1);
    } else {
        // Real and distinct roots
        printf("\nThe roots are real and different\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.3f\n", r1);
        printf("Root2 = %.3f\n", r2);
    }

    return 0;
}
