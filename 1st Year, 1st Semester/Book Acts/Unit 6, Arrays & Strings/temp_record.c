// Temperature record
#include <stdio.h>

int main() {
    int temperatures[7], maxTemp= 0, minTemp = 0, total = 0;
    
    for(int i = 0; i < 7; i++){
        printf("\nEnter temperature %d here: ", i + 1);
        scanf("%d", &temperatures[i]);
        
        total += temperatures[i];
        
        if(i == 0){
            minTemp = maxTemp = temperatures[i];
        } else{
            if(temperatures[i] > maxTemp){
                maxTemp = temperatures[i];
            }
            if(temperatures[i] < minTemp){
                minTemp = temperatures[i];
            }
        }
    }
    
    float average = (float)total / 7;
    
    printf("\nAverage: %.2f \nHighest temperature: %d \nLowest temperature: %d", average, maxTemp, minTemp);
    
    return 0;
}