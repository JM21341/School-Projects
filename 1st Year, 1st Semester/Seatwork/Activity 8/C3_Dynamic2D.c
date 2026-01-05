// Task C3
#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter number of columns: ");
    scanf("%d", &cols);

    int** matrixPtr = (int**)malloc(rows * sizeof(int));

    // checks for rows allocation
    if(matrixPtr == NULL){
        printf("\nRows memory allocation failed.");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < rows; i++){
        // allocation for cols' index
        matrixPtr[i] = (int*)malloc(cols * sizeof(int));

        // checks for cols allocation
        if(matrixPtr[i] == NULL){
            printf("\nColumn memory allocation failed.");
            return 0;
            exit(EXIT_FAILURE);
        }
    }

    // input values for each rows and columns
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("\nEnter value of column %d row %d here: ", i + 1,j + 1);
            scanf("%d", &matrixPtr[i][j]);
        }
        printf("\n");
    }

    // output values in a matrix style
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrixPtr[i][j]);
        }
        printf("\n");
    }

    // free memory
    for(int i = 0; i < rows; i++){
        free(matrixPtr[i]); // free all cols per rows
    }
    free(matrixPtr); // free all rows
}