#include <stdio.h>
#include <math.h>

// Main function
int main() {
    int i, n;
    int x[20], y[20];
    int sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;
    float a, b;

    // Input number of data points
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Input x values
    printf("Enter the values of x:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Input y values
    printf("Enter the values of y:\n");
    for (i = 0; i < n; i++) {  
        scanf("%d", &y[i]);
    }

    // Calculate required sums
    for (i = 0; i < n; i++) {  
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    // Calculate coefficients a and b for Y = a + bX
    b = ((n * sumxy - sumx * sumy) * 1.0) / (n * sumx2 - sumx * sumx);
    a = ((sumy * sumx2 - sumx * sumxy) * 1.0) / (n * sumx2 - sumx * sumx);

    // Display the regression line
    printf("\nThe regression line is: Y = %.3f + %.3fX\n", a, b);

    return 0;
}
