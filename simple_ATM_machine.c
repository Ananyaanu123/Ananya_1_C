#include <stdio.h>
void check_balance
(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}
float deposit_money
(float balance) {
    float deposit;
    printf("Enter the amount to deposit: $");
    scanf("%f", &deposit);
    if (deposit > 0) {
        balance += deposit;
        printf("You have successfully deposited $%.2f\n", deposit);
    } else {
        printf("Invalid deposit amount. Please enter a positive number.\n");
    }
    
    return balance;
}
float withdraw_money(float balance) {
    float withdraw;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &withdraw);
    if (withdraw > 0 && withdraw <= balance) {
        balance -= withdraw;
        printf("You have successfully withdrawn $%.2f\n", withdraw);
    } else if (withdraw > balance) {
        printf("Insufficient funds! Your current balance is $%.2f\n", balance);
    } else {
        printf("Invalid withdrwal amount.please enter a positive number.\n");
    }

    return balance;
}

int main() {
    int choice;
    float balance = 1000.00;
    int exit_program = 0;

    printf("Welcome to the ATM!\n");
    while (!exit_program) {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance = deposit_money(balance);
                break;
            case 3:
                balance = withdraw_money(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                exit_program = 1; 
                break;
        }
    }

    return 0;
}
