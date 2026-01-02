// Chapter 4 Case Study
#include <stdio.h>
#include <string.h>

int main(){
    int formative_assesment[4], summative_assesment[2]; 
    int formative_sum = 0, summative_sum = 0;
    char grade, remarks[8];
    
    // Formative Assesment
    printf("\nEnter all quiz points here: ");
    scanf("%d", &formative_assesment[0]);
    printf("\nEnter all recitation points here: ");
    scanf("%d", &formative_assesment[1]);
    printf("\nEnter score of all homeworks: ");
    scanf("%d", &formative_assesment[2]);
    printf("\nEnter the project's score here: ");
    scanf("%d", &formative_assesment[3]);
    
    // Summmative Assesment
    printf("\nEnter the unit test score here: ");
    scanf("%d", &summative_assesment[0]);
    printf("\nEnter the summative exam score here: ");
    scanf("%d", &summative_assesment[1]);
    
    // Processing
    for(int i = 0; i < 4; i++){
        formative_sum += formative_assesment[i];
    }
    summative_sum = summative_assesment[0] + summative_assesment[1];
    float formative_score = (formative_sum / 400.0) * 40;
    float summative_score = ((summative_sum * 3) / 600.0) * 60;
    float final_grade = formative_score + summative_score;
    
    if(final_grade >= 90 && final_grade <= 100){
        grade = 'A';
        strcpy(remarks, "PASSED");
    } else if(final_grade >= 85 && final_grade <= 89){
        grade = 'B';
        strcpy(remarks, "PASSED");
    } else if(final_grade >= 80 && final_grade <= 84){
        grade = 'C';
        strcpy(remarks, "PASSED");
    } else if(final_grade >= 75 && final_grade <= 79){
        grade = 'D';
        strcpy(remarks, "PASSED");
    } else if(final_grade < 75){
        grade = 'F';
        strcpy(remarks, "FAILED");
    }
    
    // Outputting of details
    printf("\n\nGrading Scale:\n90-100: Outstanding (A)\n85-89: Very Satisfactory (B)\n80-84: Satisfactory (C)\n75-79: Acceptable (D)\nBelow 75: Failed (F)");
    printf("\n\n\nYour grade is %c with a rating of %.0f.\nRemarks: %s", grade, final_grade, remarks);
}