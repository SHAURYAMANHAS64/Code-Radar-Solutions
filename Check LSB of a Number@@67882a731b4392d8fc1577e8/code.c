#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if (num & 1 ){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }
    return 0;
}