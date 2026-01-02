// Shpping cart system
#include <stdio.h>
#include <string.h>

float calculateCost(float price){
    
}

int main(){
    char products[10][100];
    int quantities[10];
    float price, totalCost = 0.0;
    
    for(int i = 0; i < 10; i++){
        printf("\nEnter product name: ");
        scanf(" %[^\n]", products[i]);
        
        printf("\nEnter price: ");
        scanf("%f", &price);
        
        printf("\nEnter amount: ");
        scanf("%d", &quantities[i]);
        
        totalCost += (price * quantities[i]);
    }
    
    printf("The total cost of your transaction is %.2f.", totalCost);
    
    return 0;
}