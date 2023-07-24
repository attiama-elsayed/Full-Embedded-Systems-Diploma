#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 0;
    int root = 0; /* for sqrt function */

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(num <= 0)
    {
        printf("Error! integer should be positive.\n");
        printf("Enter a positive integer again: ");
        scanf("%d", &num);
    }

    root = sqrt(num);

    if(num == (root * root))
    {
        printf("%d is a perfect square.\n", num);
    }
    else
    {
        printf("%d is not a perfect square.\n", num);
    }

    return(0);
}