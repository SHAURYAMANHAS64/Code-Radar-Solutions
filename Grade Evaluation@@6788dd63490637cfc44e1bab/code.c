int main()
{
    char grade;
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'a':
    case 'A':
        printf("Excellent\n");
        break;
    case 'b':
    case 'B':
        printf("Good\n");
        break;
    case 'c':
    case 'C':
        printf("Average\n");
        break;
    case 'd':
    case 'D':
        printf("Below Average\n");
        break;
    case 'f':
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }

    return 0;
}
