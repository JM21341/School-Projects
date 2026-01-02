// Color code management
#include <stdio.h>
#include <string.h>

int main(){
    char colorCodes[10][10];
    char code[10];
    
    for(int i = 0; i < 10; i++){
        printf("\nEnter Color %d here: ", i+1);
        scanf("%s", code);
        
        strcpy(colorCodes[i], code);
    }
    printf("\n\n=== Color Coding ===");
    for(int i = 0; i < 10; i++){
        printf("\nColor %d: %s", i + 1, colorCodes[i]);
    }
}