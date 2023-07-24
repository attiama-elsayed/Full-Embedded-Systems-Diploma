#include <stdio.h>

int main(void)
{
    int input = 0;
    int number = 0;
    int counter = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    number = input;

    while(input != 0)
    {
        input /= 10;
        ++counter;
    }

    printf("Number of digits in %d = %d\n", number, counter);

    return(0);
}