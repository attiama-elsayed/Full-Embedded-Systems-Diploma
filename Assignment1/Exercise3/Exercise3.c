#include <stdio.h>

int main(void)
{
    float temperatureCelsius = 0;
    float temperatureFahrenheit = 0;

    printf("Enter temperature in celsius: ");
    scanf("%f", &temperatureCelsius);

    temperatureFahrenheit = (temperatureCelsius * ((float)9 / (float)5)) + 32;

    printf("Temperature in fahrenheit: %.2f\n", temperatureFahrenheit);

    return(0);
}