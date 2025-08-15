#include <stdio.h>

int main() {
    int day, ans;

    // Infinite loop until user chooses to exit
    while (1) {
        printf("\t\t\tWEEK DAYS\n");
        printf("Enter the day number (1–7): ");
        scanf("%d", &day);

        // Switch-case to print corresponding weekday
        switch (day) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");  
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("INVALID DAY! Please enter a number between 1 and 7.\n");
        }

        // Ask user if they want to continue
        printf("\nWant to continue? (0 to exit, any other number to continue): ");
        scanf("%d", &ans);

        if (ans == 0) {
            break;  // Exit the loop
        }
    }

    return 0;
}
