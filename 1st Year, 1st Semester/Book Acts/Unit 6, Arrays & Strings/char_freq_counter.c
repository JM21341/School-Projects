// Character frequency counter
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char charFrequency[256], ch;
    int length = 0;
    
    printf("\nEnter string: ");
    fgets(charFrequency, sizeof(charFrequency), stdin);
    
    printf("\nEnter the character to count the frequency of: ");
    scanf("%c", &ch);
    
    for(int i = 0; charFrequency[i] != '\0'; i++){
        if(ch == charFrequency[i] || tolower(ch) == tolower(charFrequency[i]) || toupper(ch) == toupper(charFrequency)){
            length++;
        }
    }
    
    printf("\nFrequency of character '%c': %d", ch, length);
    
    return 0;
}