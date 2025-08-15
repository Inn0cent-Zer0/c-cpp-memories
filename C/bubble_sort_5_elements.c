// bubble_sort_5_elements.c
// --------------------------------------------------
// 🔁 Sorts an array of 5 integers in ascending order
// ⚠️ Uses clrscr() and getch(), so works in Turbo C
// --------------------------------------------------

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, temp, values[5];

    clrscr();  // Turbo C screen clear

    // Input array elements
    printf("Enter 5 array elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &values[i]);  // Fixed typo: 'sacnf' → 'scanf'
    }

    // Bubble sort logic
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (values[i] > values[j]) {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("\nAfter sorting the elements in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }

    getch();  // Turbo C pause
    return 0;
}
