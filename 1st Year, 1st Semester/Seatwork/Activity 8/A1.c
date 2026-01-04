// Basic Pointers
// This serves as a contribution for my group 
#include <stdio.h>

int main(){
    int x = 30;
    int* ptr = &x;

    printf("\nValue of x: %d", x);
    printf("\nAddress of x: %p", &x);
    printf("\nValue stored at ptr: %d", *ptr);
    printf("\nAddress stored in ptr: %p", ptr); 
}