#include <stdio.h>

int main() {
    int distance;
    float fuel, consumption;

    printf("Enter the total distance traveled (in km): ");
    scanf("%d", &distance);

    printf("Enter the amount of fuel spent (in liters): ");
    scanf("%f", &fuel);

    consumption = (fuel / distance) * 100;

    printf("The bike's average consumption is %.2f liters per 100 km.\n", consumption);

    return 0;
}
