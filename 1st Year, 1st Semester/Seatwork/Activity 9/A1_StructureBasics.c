/* 
    TASK A : BASIC STRUCTURES
    A1 : Define and Use a Structure
    Create a program that:
        1. Defines a structure named Student with members:
            ○ char name[30]
            ○ int age
            ○ float grade
        2. Declares one structure variable.
        3. Accepts user input for all members.
        4. Displays the structure data.
*/
#include <stdio.h>

// defines the structure
struct Student{ 
    char name[30];
    int age;
    float grade;
} stud; // shorten the call for the structure

int main(){
    /// Input
    printf("\nEnter name here: ");
    scanf(" %[^\n]", stud.name);

    printf("\nEnter age here: ");
    scanf("%d", &stud.age);

    printf("\nEnter grade here: ");
    scanf("%f", &stud.grade);

    // Output
    printf("\nName: %s", stud.name);
    printf("\nAge: %d", stud.age);
    printf("\nGrade: %.2f", stud.grade);

    return 0; 
}