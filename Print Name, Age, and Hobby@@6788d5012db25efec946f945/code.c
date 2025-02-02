#include <stdio.h>
int main(){
    int a;
    char b[20],c[20];
    scanf("%s %d %s",&b, &a, &c);
    printf("Name: %s\n",b);
    printf("Age: %d\n",a);
    printf("Hobby: %s",c);
    return 0;
}