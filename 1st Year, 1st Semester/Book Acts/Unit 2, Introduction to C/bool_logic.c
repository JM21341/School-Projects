// Boolean Logic
#include <stdio.h>

int main() {
    typedef int bool;
    bool isOver18, isOver60;
    
    printf("\nAre you over 18? (1.Yes/0.No): ");
    scanf("%d", &isOver18);
    
    if(isOver18 == 1){
        printf("\nYou are over 18.");
        printf("\nAre you over 60? (1.Yes/0.No): ");
        scanf("%d", &isOver60);
        
        if(isOver60 == 1){
            printf("\nYou are a senior.");
        } else {
            printf("\nYou are not yet a senior.");
        }
    } else{
        printf("\nYou are not over 18.");
    }
    
    return 0;
}