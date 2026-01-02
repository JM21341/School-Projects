// Recursive calculation of bonus over time
#include <stdio.h>

float calculateTotalEarnings(float salary, float bonus_rate, int years){
    if(years > 0){
        salary += salary * (bonus_rate / 100);
        return calculateTotalEarnings(salary, bonus_rate, years - 1);
    } else {
        return salary;
    }
}

int main(){
    float salary, bonus;
    int years;
    
    printf("\nEnter salary here: ");
    scanf("%f", &salary);
    
    printf("\nEnter bonus rate here: ");
    scanf("%f", &bonus);
    
    printf("\nEnter years here: ");
    scanf("%d", &years);
    
    printf("Your total earning over %d year/s is %.2f", years, calculateTotalEarnings(salary, bonus, years));
}