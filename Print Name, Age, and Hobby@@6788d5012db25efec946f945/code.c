#include <stdio.h>


int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%[^\n]s", name);
    scanf("%d",&age);
    scanf("%[^\n]s", hobby);
    printf("Name: %s , Age: %d , Hobby: %s\n", name, age , hobby);
    return 0;
}