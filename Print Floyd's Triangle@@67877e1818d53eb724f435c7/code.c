#include <stdio.h>

int main(){
    int i ,j ,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    

    
    return 0;
}