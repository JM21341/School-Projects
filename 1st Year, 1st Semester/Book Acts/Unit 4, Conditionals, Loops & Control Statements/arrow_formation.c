// Arrow Shape Formation Using C Loops
#include <stdio.h>

int main() {
    int n = 7; // height of the arrow head

    // upper triangle part
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf("    ");
        }
        for (int k = 1; k <= i; k++) {
            printf("  *");
        }
        for (int l = 1; l <= n; l++) {
            printf("  *");
        }
        printf("\n");
    }

    // lower triangle part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf("    ");
        }
        for (int k = 1; k <= i; k++) {
            printf("  *");
        }
        for (int l = 1; l <= n; l++) {
            printf("  *");
        }
        printf("\n");
    }

    return 0;
}