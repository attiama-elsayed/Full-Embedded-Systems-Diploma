#include <stdio.h>

#define PI ((float)22 / (float)7)

int main(void)
{
    float radius = 0;
    float area = 0;
    float circumference = 0;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return(0);
}