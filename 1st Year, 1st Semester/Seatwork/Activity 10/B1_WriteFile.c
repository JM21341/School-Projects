/*
    TASK B : READING & WRITING FILES
    B1 : Write User Input to a File
        Create a program that:
        1. Asks the user to input 5 lines of text.
        2. Writes these lines to a file called notes.txt.
        3. Displays a success message.
*/
#include <stdio.h>

#define MAX_LENGTH 256
#define MAX_LINES 5

int main(){
    char text[MAX_LINES][MAX_LENGTH];
    int i;

    for(i = 0; i < MAX_LINES; i++){
        printf("Line %d: ", i + 1);
        scanf(" %[^\n]", text[i]);
    }

    FILE* fptr = fopen("notes.txt", "w");

    for(i = 0; i < MAX_LINES; i++){
        fprintf(fptr, "%s \n", text[i]);
    }

    return 0;
}