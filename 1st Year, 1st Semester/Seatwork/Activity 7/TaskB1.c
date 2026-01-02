#include <stdio.h>
#include <string.h>

int main(){
    char string[50];
    
    printf("\nEnter string here: ");
    fgets(string, sizeof(string), stdin);
    
    printf("\nString: %s", string);
    printf("\nLength: %d", strlen(string));
}