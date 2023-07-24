#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("The result of ((%d + %d) * 3) - 10 = %d\n", num1, num2, ((num1 + num2) * 3) - 10);

    return(0);
}