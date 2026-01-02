// Diamond Formation Using C Loops
#include <stdio.h>

int main() {
    int n = 5;  // number of rows for the upper half of the diamond

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++){
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++){
            printf(" *");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--){
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}