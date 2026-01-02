// Grade Calculator with Type Casting
#include <stdio.h>

int main() {
    float sum = 0, grades[3];
    
    for(int i=0; i < 3; i++){
        printf("\nEnter Exam %d score here: ", i+1);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }
    
    int average = (int)sum / 3;
    
    printf("\nYour final grade is %d", average);
}