// Student grades management
#include <stdio.h>

int main() {
    int grades[5];
    int total = 0, max, min;
    
    for (int i = 0; i < 5; i++) {
        printf("\nEnter Student %d Grade here: ", i + 1);
        scanf("%d", &grades[i]);
        
        total += grades[i];
        
        if (i == 0) {
            max = min = grades[i];
        } else {
            if (grades[i] > max) {
                max = grades[i];
            }
            if (grades[i] < min) {
                min = grades[i];
            }
        }
    }
    
    float average = (float)total / 5;
    
    printf("\nAverage: %.2f", average);
    printf("\nHighest grade: %d", max);
    printf("\nLowest grade: %d\n", min);
    
    return 0;
}