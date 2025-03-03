#include <stdio.h>

void main() {
    float balance, amount;

    printf("Enter your account balance: Rs. ");
    scanf("%f", &balance);

    while (balance > 0) {

        printf("\nEnter amount to withdraw: Rs. ");
        scanf("%f", &amount);

        if (amount > balance) {
            printf("Insufficient balance! Transaction declined.\n");
            break; 
        } 

        balance -= amount;
        printf("Withdrawal successful! Remaining balance: Rs. %.2f\n", balance);


        if (balance == 0) {
            printf("Account balance is zero. No further withdrawals allowed.\n");
            break;
        }
    }

    printf("\nThank you for using our ATM!\n");
}
