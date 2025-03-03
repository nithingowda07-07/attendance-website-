#include <stdio.h>

void main() {
    int numBooks, i;
    float price, totalCost = 0.0;

    printf("Enter the number of books you want to rent: ");
    scanf("%d", &numBooks);

    for (i = 1; i <= numBooks; i++) {
        printf("Enter the price of book %d: ", i);
        scanf("%f", &price);
        totalCost += price; 
    }

    printf("Total rental cost: Rs. %.2f\n", totalCost);
}
