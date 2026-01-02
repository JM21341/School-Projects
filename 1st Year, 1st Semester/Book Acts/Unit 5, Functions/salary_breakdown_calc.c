// Salary breakdown calculation
#include <stdio.h>

float calculateSalaryAfterBreakdown(float gross_salary, float *basic, float *house, float *transport){
    *basic = gross_salary * 0.50;
    *house = gross_salary * 0.30;
    *transport = gross_salary * 0.20;
}

int main() {
    float salary, basic, house, transport;
    printf("\nEnter gross salary here: ");
    scanf("%f", &salary);
    
    calculateSalaryAfterBreakdown(salary, &basic, &house, &transport);
    
    printf("\nGross Salary: %.2f", salary);
    printf("\nBasic Pay: %.2f", basic);
    printf("\nHouse Allowance: %.2f", house);
    printf("\nTransport allowance: %.2f", transport);
    
    return 0;
}