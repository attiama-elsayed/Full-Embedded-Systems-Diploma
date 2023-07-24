#include <stdio.h>

#if 0
int main(void)
{
    int input = 0;
    int power = 0;
    int counter = 0;
    int result = 1;

    printf("Enter a number: ");
    scanf("%d", &input);
    printf("Enter a power: ");
    scanf("%d", &power);

    if(power == 0)
    {
        result = 1;
    }
    else if(power == 1)
    {
        result = input;
    }
    else
    {
        for(counter = power; counter >= 1; counter--)
        {
            result *= input;
        }
    }

    printf("The result of %d ^ %d = %d\n", input, power, result);

    return(0);
}
#endif

#if 1
int main(void)
{
    int input = 0;
    int power = 0;
    unsigned long long result = 1ULL;

    printf("Enter a number: ");
    scanf("%d", &input);

    printf("Enter a power: ");
    scanf("%d", &power);
    
    while(power != 0)
    {
        result *= input;
        --power;
    }

    printf("Result = %llu\n", result);

    return(0);
}
#endif