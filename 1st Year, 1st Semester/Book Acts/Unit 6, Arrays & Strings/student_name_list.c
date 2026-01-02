// Student name list
#include <stdio.h>
#include <string.h>

int main(){
    char students[10][100];
    char student[100];
    int studentNum = 0;
    
    for(int i = 0; i < 10; i++){
        printf("\nEnter Student %d name here: ", i + 1);
        scanf(" %s", students[i]);
    }
    
    printf("\nSearch student: ");
    scanf(" %s", student);
    
    for(int i = 0; i < 10; i++){
        if(strcmp(student, students[i]) == 0){
            printf("Student %d: %s", i + 1, students[i]);
        }
    }
}