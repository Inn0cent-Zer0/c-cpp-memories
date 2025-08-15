// sort_student_marks.c
// --------------------------------------------------
// 🎓 Sorts marks of 5 students in ascending order
// ⚠️ Uses clrscr() and getch(), so works in Turbo C
// --------------------------------------------------

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, mark[5], t;

    clrscr();  // Turbo C screen clear

    // Input marks
    printf("Enter the marks for 5 students:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &mark[i]);
    }

    // Bubble sort logic
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (mark[j] > mark[j + 1]) {
                t = mark[j];
                mark[j] = mark[j + 1];
                mark[j + 1] = t;
            }
        }
    }

    // Output sorted marks
    printf("\nMarks in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", mark[i]);
    }

    getch();  // Turbo C pause
    return 0;
}
