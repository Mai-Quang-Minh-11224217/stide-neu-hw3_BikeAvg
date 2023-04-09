#include <stdio.h>

int main()
{
    int distance;
    float fuel, consumption;
    printf("Enter the distance travelled (in km): ");
    scanf("%d", &distance);
    printf("Enter the amount of fuel consumed (in litres): ");
    scanf("%f", &fuel);
    consumption = (fuel / distance) * 100;
    printf("Average fuel consumption: %.2f litres/100km", consumption);
    return 0;
}
