// Pyramid Formation Using Loops
#include <stdio.h>

int main() {
    int n = 5; // Number of columns
    
    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" "); // For spaces before the asterisk
        } 
        
        for(int k = 1; k <= (2 * i - 1); k++){
            printf("*"); // The formation of asterisk
        }
        
        printf("\n"); 
    }
    
    return 0;
}