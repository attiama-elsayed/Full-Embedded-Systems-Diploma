#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int min = 0;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    min = num1;

    if(num2 < min)
    {
        min = num2;
    }

    if(num3 < min)
    {
        min = num3;
    }

    printf("%d is the smallest number.\n", min);

    return(0);
}