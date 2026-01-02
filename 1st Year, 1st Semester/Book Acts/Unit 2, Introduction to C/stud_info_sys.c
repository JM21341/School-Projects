#include <stdio.h>

int main(){
    char studName[50];
    int ID;
    typedef int bool;
    bool isEnrolled;
    float GPA;

    printf("\nAre you enrolled? (1. Yes/ 2. No): ");
    scanf("%d", &isEnrolled);

    printf("\nEnter your name: ");
    scanf("%s", &studName);

    printf("\nEnter your ID number: ");
    scanf("%d", &ID);

    printf("\nEnter your GPA: ");
    scanf("%f", &GPA);

    if(isEnrolled == 1){
        printf("\nHello %s! You are currently enrolled. Your ID number is %d and your GPA is %.2f.", studName, ID, GPA);
    } else{
        printf("\nYou are not enrolled.");
    }

    return 0;
}