// Word count in a sentence
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char words[50];
    int wordCount = 1;
    
    printf("\nEnter sentence here: ");
    scanf(" %[^\n]", words);
    
    for(int i = 0; words[i] != '\0'; i++){
        if(isspace(words[i])){
            wordCount++;
        }
    }
    
    printf("\nThe word count is %d", wordCount);
}