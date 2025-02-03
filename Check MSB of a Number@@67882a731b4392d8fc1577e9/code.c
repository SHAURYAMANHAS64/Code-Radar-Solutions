#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if(num & (1<<(sizeof(num)*8-1))){
        print("Set\n");
    }else{
        printf("Not Set\n");
    }
    return 0;
}