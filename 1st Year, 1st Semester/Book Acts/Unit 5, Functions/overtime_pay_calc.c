// Overtime pay calculation
#include <stdio.h>

float calculateTotalSalary(float hourly_rate, int hours){
    float total_salary = 0;
    if(hours > 40){
        total_salary = (hourly_rate * 40) + ((hours - 40) * hourly_rate * 1.5);
    } else{
        total_salary = hourly_rate * hours;
    }
    return total_salary;
}

int main() {
    float rate = 0;
    int hours = 0;
    
    printf("\nEnter hourly rate: ");
    scanf("%f", &rate);
    
    printf("\nEnter hours worked: ");
    scanf("%d", &hours);
    
    printf("\nThe total salary is %.2f.", calculateTotalSalary(rate, hours));
    
    return 0;
}