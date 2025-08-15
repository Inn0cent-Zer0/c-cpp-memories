#include <stdio.h>

int main() {
    char accno[20];           // Account number as string
    char accholdname[50];     // Account holder name
    int balance = 0;          // Initial balance
    int withdrawlamt, dptamt; // Withdrawal and deposit amounts
    int choice;               // User choice: 0 for withdrawal, 1 for deposit

    // Input account details
    printf("Enter the account number: ");
    scanf("%s", accno);

    printf("Enter account holder name: ");
    scanf("%s", accholdname);

    // Ask user for transaction type
    printf("Transaction type - Withdrawal (0) or Deposit (1): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Deposit flow
        printf("Enter the amount to deposit: ");
        scanf("%d", &dptamt);
        balance += dptamt;
        printf("Current balance: %d\n", balance);
    } else if (choice == 0) {
        // Withdrawal flow
        printf("Enter the amount to withdraw: ");
        scanf("%d", &withdrawlamt);

        if (withdrawlamt > balance) {
            printf("Insufficient balance!\n");
        } else {
            balance -= withdrawlamt;
            printf("Current balance: %d\n", balance);
        }
    } else {
        printf("Invalid choice. Please enter 0 or 1.\n");
    }

    return 0;
}
