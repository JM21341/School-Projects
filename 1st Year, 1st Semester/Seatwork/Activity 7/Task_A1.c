// Task A: Recursion
#include <stdio.h>

long long int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursives function
}

int main(){
    int num = 0;
    long long int result = 0;
    
    printf("\nEnter nth term here: ");
    scanf("%d", &num);
    
    if(num >= 0){
        if(num <= 45){
            result = fibonacci(num);
            printf("\nThe result is %lld", result);
        } else{
            printf("\nNumber too large");
        }
    } else{
        printf("\nInvalid input!");
    }
    
    return 0;
}