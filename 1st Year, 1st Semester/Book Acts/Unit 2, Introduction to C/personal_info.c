#include <stdio.h>

int main(){
    char username[50];
    int age = 0; 
    float height = 0.0f;

    printf("\nName: ");
    scanf("%s", &username);

    printf("\nAge: ");
    sscanf("%d", &age);

    printf("\nHeight: ");
    scanf("%f", &height);

    printf("\nHello %s! You are %d year/s old with a height of %.2f.", username, age, height);
}