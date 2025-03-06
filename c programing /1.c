#include <stdio.h>

int main() {
    float item1, item2, item3, total;

    printf("Enter the price of item 1: ");
    scanf("%f", &item1);

    printf("Enter the price of item 2: ");
    scanf("%f", &item2);

    printf("Enter the price of item 3: ");
    scanf("%f", &item3);

    total = item1 + item2 + item3;

    printf("The total bill is: %.2f\n", total);

    return 0;
}
