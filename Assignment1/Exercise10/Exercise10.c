#include <stdio.h>

int main(void)
{
    char operator = 0;
    float first_operand = 0;
    float second_operand = 0;
    double result = 0;

    printf("Enter both operands: ");
    scanf("%f %f", &first_operand, &second_operand);

    printf("Select an operation '+' or '-' or '*' or '/': ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
        {
            result = first_operand + second_operand;
        }
        break;
        case '-':
        {
            result = first_operand - second_operand;
        }
        break;
        case '*':
        {
            result = first_operand * second_operand;
        }
        break;
        case '/':
        {
            result = first_operand / second_operand;
        }
        break;
        default:
        {
            printf("Error! wrong operator.\n");
        }
        break;
    }

    printf("The result of %.2f %c %.2f = %.2lf\n", first_operand, operator, second_operand, result);

    return(0);
}