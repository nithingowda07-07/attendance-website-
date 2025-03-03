#include <stdio.h>

void main() {
    int age;
    float price;

    // User input
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age < 0) {
        printf("Invalid age entered!\n");
    } 
    else if (age <= 10) {
        price = 0.00f;  
    }
    else if (age <= 12) {
        price = 250.00;  
    } 
    else if (age <= 60) {
        price = 500.00f; 
    } 
    else {
        price = 400.00f;  
    }

    if (age >= 0) {
        printf("Ticket price: $%.2f\n", price);
    }
}
