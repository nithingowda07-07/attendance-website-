#include <stdio.h>

int main() {
    int age;

    // Input: Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are not eligible to vote. You need to be at least 18 years old.\n");
    }

    return 0;
}