#include<stdio.h>
int main()
{
    char input[3];
    
    scanf("%s", input);

    if (strcmp(input, "R") == 0)
    {
        printf("Stop\n");
    }
    else if (strcmp(input, "G") == 0)
    {
        printf("Go\n");
    }
    else if (strcmp(input, "Y") == 0)
    {
        printf("Slow Down\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
