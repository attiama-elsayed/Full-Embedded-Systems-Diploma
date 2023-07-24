#include <stdio.h>

int main(void)
{
    int number = 0;
    int reversedNumber = 0;
    int remainder = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        remainder = number % 10;

        reversedNumber = (reversedNumber * 10) + remainder;

        number /= 10; 
    }

    printf("Reversed number = %d\n", reversedNumber);

    return(0);
}