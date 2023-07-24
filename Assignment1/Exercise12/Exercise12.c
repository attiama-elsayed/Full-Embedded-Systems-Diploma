#include <stdio.h>

int main(void)
{
    int input = 0;
    int i = 0;
    unsigned long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &input);

    while (input <= 0)
    {
        printf("Error! integer should be greater than zero.\n");
        printf("Enter a positive integer again: ");
        scanf("%d", &input);
    }

    for(i = input; i > 1; i--)
    {
        factorial *= i;
    }

    printf("Factorial of %d = %lu\n", input, factorial);

    return(0);
}