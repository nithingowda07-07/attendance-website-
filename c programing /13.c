#include <stdio.h>

void main() {
    int choice, quantity;
    float price, totalBill;

  
    printf("Restaurant Lunch Menu:\n");
    printf("1. Burger - Rs.5\n");
    printf("2. Pizza  - Rs.8\n");
    printf("3. Pasta  - Rs.6\n");
    printf("4. Salad  - Rs.4\n");

    printf("Enter the menu item number (1-4): ");
    scanf("%d", &choice);
    

    printf("Enter the quantity: ");
    scanf("%d", &quantity);


    switch (choice) {
        case 1: price = 5.00f; break; // Burger
        case 2: price = 8.00f; break; // Pizza
        case 3: price = 6.00f; break; // Pasta
        case 4: price = 4.00f; break; // Salad
        default:
            printf("Invalid choice! Please select a valid item.\n");
            return; 


    totalBill = price * quantity;


    printf("Total bill amount: Rs. %.2f\n", totalBill);
}
