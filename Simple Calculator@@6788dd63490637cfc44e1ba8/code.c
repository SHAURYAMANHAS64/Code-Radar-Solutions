#include<stdio.h>
int main()
{
    int num1, num2;
    char op;

    
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%f\n", (float)num1 / num2);
        }
        else
        {
            printf("Cannot divide by zero\n");
        }
        break;

    default:
        printf("error\n");
        break;
    }

    return 0;
}
