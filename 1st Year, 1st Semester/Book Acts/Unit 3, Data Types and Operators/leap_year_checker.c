// Leap Year Checker
#include <stdio.h>

int main() {
    int year = 0;
    
    printf("\nEnter year: ");
    scanf("%d", &year);
    
    if(year % 4 == 0 || year % 4 == 0){
        printf("\nIt is leap year.");
    } else{
        printf("\nIt is not leap year.");
    }
}