#include <stdio.h>

int main() {
    double principal, rate, monthlyRate, emi, power = 1;
    int tenure, months, i;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter loan tenure (in years): ");
    scanf("%d", &tenure);

    monthlyRate = rate / (12 * 100);
    months = tenure * 12;

    for (i = 0; i < months; i++) {
        power *= (1 + monthlyRate);
    }

    emi = (principal * monthlyRate * power) / (power - 1);

    printf("Monthly EMI: %.2lf\n", emi);
}
