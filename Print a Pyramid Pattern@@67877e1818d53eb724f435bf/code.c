#include <stdio.h>

int main(){
    int n, i, j, stars;
    scanf("%d", &n);
    
    // Initialize stars to 1 because the first line should have 1 star.
    stars = 1;
    
    for(i = 1; i <= n; i++){
        // Print leading spaces
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        
        // Print stars (increasing by 2 for each line)
        for(j = 1; j <= stars; j++){
            printf("* ");
        }
        
        // Increase the number of stars by 2 for the next line
        stars += 2;
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}
