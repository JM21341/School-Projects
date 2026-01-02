// Electricity bill calculator
#include <stdio.h>

int main() {
    int kWh = 0, kW = 0;
    float hours = 0.0, total_bill = 0.0, rate = 0.00;
    
    printf("\nEnter the kilowatts used here: ");
    scanf("%d", &kW);
    printf("\nEnter the time the kilowatt is used for (in hours): ");
    scanf("%f", &hours);
    
    kWh = kW * (int)hours;
    
    if(kWh > 0 && kWh <= 100){
        rate = 10.00; 
    } else if(kWh > 100 && kWh <= 250){
        rate = 11.00;
    } else{
        rate = 12.00;
    }
    
    total_bill = kWh * rate;
    
    printf("\nYour total bill for this month is %.2f", total_bill);
    return 0;
}