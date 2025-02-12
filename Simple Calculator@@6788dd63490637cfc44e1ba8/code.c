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
            printf("%d\n", (int)num1 / num2);
        }
        else
        {
            printf("error\n");
        }
        break;

    default:
        printf("error\n");
        break;
    }

    return 0;
}
