#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main(void)
{
    int input = 0;
    char isPrime = TRUE; /* TRUE: PRIME */
    int counter = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &input);

    while(input < 0)
    {
        printf("Error! integer should be positive.\n");
        printf("Enter a positive integer again: ");
        scanf("%d", &input);
    }

    if((input == 0) || (input == 1)) /* 0 and 1 are not prime numbers */
    {
        isPrime = FALSE; /* TRUE: PRIME */
    }

    for(counter = 2; counter <= (input/2); counter++)
    {
        if((input % counter) == 0)
        {
            isPrime = FALSE;
            break;
        }
    }

    if(isPrime == TRUE)
    {
        printf("%d is a prime number.\n", input);
    }
    else
    {
        printf("%d is not a prime number.\n", input);
    }

    return(0);
}