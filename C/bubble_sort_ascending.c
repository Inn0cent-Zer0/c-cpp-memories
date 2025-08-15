// bubble_sort_ascending.c
// --------------------------------------------------
// 🔁 Sorts an array of 10 integers in ascending order
// ⚠️ Uses clrscr() and getch(), so works in Turbo C
// --------------------------------------------------

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, temp, values[10];

    clrscr();  // Turbo C screen clear

    // Input array elements
    printf("Enter 10 array elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &values[i]);
    }

    // Bubble sort logic
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (values[i] > values[j]) {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("\nThe elements after sorting in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", values[i]);
    }

    getch();  // Turbo C pause
    return 0;
}
