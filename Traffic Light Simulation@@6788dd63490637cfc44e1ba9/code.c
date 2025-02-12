#include<stdio.h>
int main()
{
    char input[3];
    scanf("%s", input);

    switch (input[0])
    {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}

