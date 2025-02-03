#include <stdio.h>



int main() {
    int num , pos;
    scanf("%d %d", &num ,&pos);
    int result = num>>pos;
    printf("%d\n",result);
    return 0;
}