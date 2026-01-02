// Recursive salary increment calculation
#include <stdio.h>

float calculateSalaryAfterYears(float salary, float rate, int years){
    if(years > 0){
        salary += salary * (rate / 100);
        return calculateSalaryAfterYears(salary, rate, years - 1);
    } else{
        return salary;
    }
}

int main() {
    float salary = 0, rate = 0;
    int years = 0;
    
    printf("\nEnter salary here: ");
    scanf("%f", &salary);
    
    printf("\nEnter increment rate here: ");
    scanf("%f", &rate);
    
    printf("\nEnter years here: ");
    scanf("%d", &years);
    
    printf("\nYour total salary is %.2f.", calculateSalaryAfterYears(salary,rate,years));
}