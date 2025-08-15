#include <stdio.h>

int main() {
    int m, n, p, q;
    int a[20][20], b[20][20], c[20][20];
    int i, j, k;

    // Input order of first matrix
    printf("Enter the number of rows and columns of first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    // Input order of second matrix
    printf("Enter the number of rows and columns of second matrix (p x q): ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix order mismatch! Cannot multiply.\n");
        return 1;
    }

    // Input elements of first matrix
    printf("Enter elements of first matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output result matrix
    printf("Resultant matrix C (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
