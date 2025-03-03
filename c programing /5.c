#include <stdio.h>

void main() {
    double salary, increment, new_salary;
 
    printf("Enter current salary: ");
    scanf("%lf", &salary);

    printf("Enter percentage increment: ");
    scanf("%lf", &increment);

    new_salary = salary + (salary * increment / 100);

    printf("Updated salary: %.2lf\n", new_salary);
}
