#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2)
    {
        printf("Both numbers are equal.\n");
    }
    else
    {
        if(num1 > num2)
        {
            printf("num1 contains the higher value %d\n", num1);
        }
        else
        {
            printf("num2 contains the higher value %d\n", num2);
        }
    }

    return(0);
}