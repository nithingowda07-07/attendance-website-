#include <stdio.h>

void main() {
    float billAmount, discount, finalAmount;

    printf("Enter the total bill amount: ");
    scanf("%f", &billAmount);

    if (billAmount > 100) {
        discount = billAmount * 0.10; 
    } else {
        discount = 0.00;
    }

    finalAmount = billAmount - discount;

    printf("Discount: Rs. %.2f\n", discount);
    printf("Final bill amount: Rs. %.2f\n", finalAmount);
}
