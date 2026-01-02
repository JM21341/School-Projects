// Employee salary calculator
#include <stdio.h>

int main(){
    float salaries[10], totalSalary = 0;
    int numEmployees = 10;
    
    for(int i = 0; i < numEmployees; i++){
        printf("\nEnter Employee %d salary here: ", i + 1);
        scanf("%f", &salaries[i]);
        
        totalSalary += salaries[i]; // Calculation of total salary
    }
    
    printf("\n==== Employee Salary ====");
    
    for(int i = 0; i < numEmployees; i++){
        printf("\nEmployee %d: \t%.2f", i + 1, salaries[i]);
    }
    
    printf("\n-------------\nTotal: \t\t\t%.2f", totalSalary);
}