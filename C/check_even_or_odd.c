// check_even_or_odd.c
// --------------------------------------------------
// 🔢 Checks whether a given integer is even or odd
// ⚠️ Uses getch(), so works best in Turbo C / DOSBox
// --------------------------------------------------

#include <stdio.h>
#include <conio.h>  // Required for getch() in Turbo C

int main() {
    int num;

    // Input number
    printf("Enter the number: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("It is even\n");
    } else {
        printf("It is odd\n");
    }

    getch();  // Turbo C pause
    return 0;
}
