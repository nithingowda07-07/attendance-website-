#include <stdio.h>

void main() {
    float distance, fuel, efficiency;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Enter fuel consumed (in liters): ");
    scanf("%f", &fuel);

    efficiency = distance / fuel;

    printf("Fuel efficiency: %.2f km/L\n", efficiency);
}
