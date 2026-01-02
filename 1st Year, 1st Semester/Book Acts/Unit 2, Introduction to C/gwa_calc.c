#include <stdio.h>

int main()
{
    int sum = 0, grade[5];
    float average;

    for(int i = 0; i < 5; i++){
        printf("\nEnter grade of Subjecct %d: ", i + 1);
        scanf("%d", &grade[i]);

        sum += grade[i];
    }

    average = (float)sum / 5.0f;

    if(average > 60){   
        printf("\nYou passed!");
    } else{
        printf("\nYou failed!");
    }

    return 0;
}