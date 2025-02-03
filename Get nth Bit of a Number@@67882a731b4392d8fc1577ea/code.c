#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num , pos;
    scanf("%d %d",&num,&pos);
    printf("%d\n",(num>>pos)&1);
    return 0;
}