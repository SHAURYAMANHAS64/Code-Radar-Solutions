#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a ,b;
    scanf("%d %d",&a,&b);
    if(a<0 || b<0){
        printf("Negative");
    }
    else if(a==0 || b==0){
        printf("Zero");
    }else{
        printf("Positive");
    }
    return 0;
}