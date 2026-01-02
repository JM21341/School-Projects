#include <stdio.h>
#include <string.h>

int main(){
    char strA[30], strB[30], strC[30];
    
    strcpy(strA, "Hello World");
    strcpy(strB, strA);
    printf("\nString A: %s", strA);
    printf("\nString B: %s", strB);
    
    if(strcmp(strA, strB) == 0){
        printf("\nString A and String B are equal");
    } else{
        printf("\nString A and String B are not equal");
    }
    
    strcpy(strC, "Goodbye!");
    
    int result = strcmp(strA, strC);
    printf("\nResult: %d", result);
    
    if(result < 0){
        printf("\n%s comes before %s", strA, strC);
    } else if(result > 0){
        printf("\n%s comes after %s", strA, strC);
    } else{
        printf("\n%s is the same as %s", strA, strC);
    }
}