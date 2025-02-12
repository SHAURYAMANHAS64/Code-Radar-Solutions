#include<stdio.h>
int main()
{
    int num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("The sum is %d\n", num1 + num2);
        break;
    case '-':
        printf("The difference is %d\n", num1 - num2);
        break;
    case '*':
        printf("The product is %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("The division is %f\n", (float)num1 / num2);
        }
        else
        {
            printf("Cannot divide by zero\n");
        }
        break;

    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}
