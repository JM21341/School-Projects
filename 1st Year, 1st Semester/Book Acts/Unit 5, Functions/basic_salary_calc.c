// Basic salary calculator
#include <stdio.h>

float calculateNetSalary(float gross_salary){
    float total_amount = gross_salary - (gross_salary * 0.12) - 1000.00;
    
    printf("\nYour net salary is %.2f if the tax is 12%% and deduction is 500", total_amount);
}

int main() {
    float salary = 0;
    
    printf("\nEnter salary here: ");
    scanf("%f", &salary);
    calculateNetSalary(salary);
}