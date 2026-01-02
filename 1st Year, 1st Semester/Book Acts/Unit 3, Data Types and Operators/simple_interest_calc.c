// Simple Interest Calculator
#include <stdio.h>

int main() {
    float principal;
    int time_period, rate;
    
    printf("\nEnter the principal amount: ");
    scanf("%f", &principal);
    
    printf("\nEnter the rate of interest (in percentage): ");
    scanf("%d", &rate);
    
    printf("\nEnter the time period the money is borrowed(in months): ");
    scanf("%d", &time_period);
    
    float final_rate = rate / 100.0f;
    float years = time_period / 12.0f;
    float simple_interest = principal * final_rate * years;
    
    printf("\nThe simple interest is %.2f", simple_interest);
}