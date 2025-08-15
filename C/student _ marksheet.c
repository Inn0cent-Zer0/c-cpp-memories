#include <stdio.h>

int main() {
    char Name[25], Class[15], Dept[15];
    int Mark1, Mark2, Mark3, Mark4, Total;
    float Avg;

    // Input student details
    printf("Name of the student: ");
    scanf("%s", Name);

    printf("Class: ");
    scanf("%s", Class);

    printf("Department: ");
    scanf("%s", Dept);

    // Input marks
    printf("Subject 1: ");
    scanf("%d", &Mark1);

    printf("Subject 2: ");
    scanf("%d", &Mark2);

    printf("Subject 3: ");
    scanf("%d", &Mark3);

    printf("Subject 4: ");
    scanf("%d", &Mark4);

    // Calculate total and average
    Total = Mark1 + Mark2 + Mark3 + Mark4;
    Avg = Total / 4.0;  // Use 4.0 to ensure float division

    // Output results
    printf("\n--- Student Marksheet ---\n");
    printf("Name       : %s\n", Name);
    printf("Class      : %s\n", Class);
    printf("Department : %s\n", Dept);
    printf("Total      : %d\n", Total);
    printf("Average    : %.2f\n", Avg);

    // Result logic
    if (Mark1 >= 50 && Mark2 >= 50 && Mark3 >= 50 && Mark4 >= 50)
        printf("Result     : Pass\n");
    else
        printf("Result     : Fail\n");

    return 0;
}
