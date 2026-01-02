// User Account Balance
#include <stdio.h>

int main() {
    float balance = 100.50, deposit_amount = 0.00, withdrawal = 0.00;
    int decision;
    char username[100];
    
    printf("\nEnter name here: ");
    scanf("%s", username);
    
    printf("\nYour current balance is %.2f", balance);
    
    printf("\n\n1.Deposit\n\n2.Withdraw\n\nEnter operation: ");
    scanf("%d", &decision);
    
    if(decision == 1){
        printf("\nEnter deposit amount: ");
        scanf("%f", &deposit_amount);
        balance += deposit_amount;
    } else if(decision == 2){
        return_back:
            printf("\nEnter withdraw amount: ");
            scanf("%f", &withdrawal);
        
        if(withdrawal <= balance){
            balance -= withdrawal;
        } else{
            printf("\nYou don't have enough balance. Please try again!\n");
            goto return_back;
        }
    } else {
        printf("\nUnknown operation");
    }
    
    printf("\nYour final balance is %.2f", balance);
    return 0;
}