#include <stdio.h>

int main(){
    int n, i, j, stars;
    scanf("%d", &n);
    stars = 1;
    for(i = 1; i <= n; i++){
        
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(j = 1; j <= stars; j++){
            printf("*");
        }
        stars += 2;
        printf("\n");
    }
    
    return 0;
}
