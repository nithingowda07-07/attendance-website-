#include <stdio.h>

int main() {
    float salary, increment, new_salary;

    printf("Enter current salary: ");
    scanf("%f", &salary);

    printf("Enter percentage increment: ");
    scanf("%f", &increment);

    new_salary = salary + (salary * increment / 100);

    printf("Updated salary: %.2f\n", new_salary);

    return 0;
}
