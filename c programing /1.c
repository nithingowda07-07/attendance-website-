#include <stdio.h>

int main() {
    float price, total = 0.0;

    printf("Enter item prices (enter a negative number to stop):\n");

    while (1) {
        printf("Enter price: ");
        scanf("%f", &price);

        if (price < 0) {
            break; 
        total += price;
    }

    printf("\nTotal Bill Amount: %.2f\n", total);

    return 0;
}}
