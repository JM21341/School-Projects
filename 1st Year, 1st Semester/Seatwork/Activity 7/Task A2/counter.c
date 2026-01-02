#include "counter.h"
#include <stdio.h>

void incrementCounter(){
    int globalCount = 0;
    static int callCount;
    
    callCount++;
    
    printf("\nGlobal Count: %d", globalCount);
    printf("\nStatic Call Count: %d", callCount);
}