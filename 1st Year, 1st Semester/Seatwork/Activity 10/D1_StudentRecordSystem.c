/*
    TASK B : READING & WRITING FILES
    B1 : Simple Student Record System (File-Based)
        Create a program using a text file students.txt that will:
            1. Allow the user to add student records (name, age, course) and save to file.
            2. Display all stored records by reading the file.
            3. Handle cases where the file does not exist or cannot be opened.
        Menus should look like:
            1 – Add Record
            2 – View Records
            3 – Exit
*/
#include <stdio.h>
#include <stdlib.h> // for exit(EXIT_FAILURE) (optional)

#define MAX_LINE 1024

int addRecord(const char* name, const char* course, int age, float average){
    FILE* fptr = fopen("students.txt", "a"); // open the file to append

    if(fptr == NULL){
        printf("\nFile opened unsuccessfully.");
        exit(EXIT_FAILURE);
    }

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Course: %s\n", course);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "Average: %.2f\n", average);
    fprintf(fptr, "------------------------------\n");

    fclose(fptr); // close the file
    fptr = NULL; // returns fptr as a NULL for security purposes
    return 1;
}

int viewRecords(){
    char line[MAX_LINE], dec;

    FILE* fptr = fopen("students.txt", "r"); // opens file in read mode

    if(fptr == NULL){
        printf("\nFile opened unsuccessfully.");
        exit(EXIT_FAILURE);
    }

    while(fgets(line, sizeof(line), fptr)){ // reads the file line by line
        printf("%s\n", line); // prints the file line by line
    }

    printf("\nDo you wish to continue? (y/n): ");
    scanf(" %c", &dec);

    if(dec == 'y') return 1;
    else if(dec == 'n') return 0;
    else return -1;
}

int main(){
    int dec = 0, cont = 0;

    char name[50];
    int age = 0;
    char course[20];
    float average = 0;

    do{
        printf("\nOPERATIONS AVAILABLE: ");
        printf("\n[1] Add Record");
        printf("\n[2] View Records");
        printf("\n[3] Exit");
        printf("\nEnter decision here: ");
        scanf("%d", &dec);

        switch(dec){
            case 1:
                printf("\nEnter name here: ");
                scanf(" %[^\n]", name);

                printf("\nEnter course here: ");
                scanf(" %s", course);

                printf("\nEnter age here: ");
                scanf("%d", &age);

                printf("\nEnter average here: ");
                scanf("%f", &average);

                cont = addRecord(name, course, age, average);
                if(cont){
                    printf("\nStudent added successfully.");
                }
                break;
            case 2:
                cont = viewRecords();
                break;
            case 3:
                cont = 0;
                break;
            default:
                printf("\nInvalid input.");
                cont = 0;
                break;
        }
    } while(cont == 1);

    return 0;
}