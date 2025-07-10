//wap to initalize some amount in your account in your account then given choice to userr for deposit withdraw and display upload amount 
#include <stdio.h>

void main() {
    int choice;
    int balance = 3000;
    int damt, wamt, total;

    printf("Enter your choice:\n1 for Deposit\n2 for Withdraw\n3 for Display Balance\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a deposit amount: ");
        scanf("%d", &damt); 
        if (damt > 0) {
            total = balance + damt;
            printf("Your total available balance is: %d\n", total);
        } else {
            printf("Invalid deposit amount.\n");
        }
    } else if (choice == 2) {
        printf("Enter a withdraw amount: ");
        scanf("%d", &wamt);  
        if (wamt > 0 && balance >= wamt) {
            total = balance - wamt;
            printf("Your total balance after withdrawal is: %d\n", total);
        } else {
            printf("Insufficient balance or invalid amount.\n");
        }
    } else if (choice == 3) {
        printf("Your current balance is: %d\n", balance);
    } else {
        printf("Invalid choice.\n");
    }
}
