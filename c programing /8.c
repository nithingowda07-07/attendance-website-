#include <stdio.h>

void main() {
    int vehicleType;
    float tollTax;

    printf("Select your vehicle type:\n");
    printf("1. Car\n");
    printf("2. Truck\n");
    printf("3. Bike\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &vehicleType);

    if (vehicleType == 1) {
        tollTax = 105.00;
    } 
    else if (vehicleType == 2) {
        tollTax = 145.00;
    } 
    else if (vehicleType == 3) {
        tollTax = 40.00; 
    } 
    else {
        printf("Invalid vehicle type!\n");
        return; 
    }

  
    printf("Toll tax for your vehicle: Rs. %.2f\n", tollTax);
}
