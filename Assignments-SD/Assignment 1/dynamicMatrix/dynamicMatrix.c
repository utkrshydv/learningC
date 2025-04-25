//Utkarsh Yadav 23053172

#include <stdio.h>
#include <stdlib.h>


int** createMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (!matrix) {
        fprintf(stderr, "Memory allocation failed for rows\n");
        return NULL;
    }
    
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        if (!matrix[i]) {
            fprintf(stderr, "Memory allocation failed for columns\n");
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}


void fillMatrix(int** matrix, int rows, int cols) {
    int value = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }
}


void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows;
    int cols;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("Columns: ");
    scanf("%d", &cols);


    int** matrix = createMatrix(rows, cols);
    if (!matrix) {
        return 1; 
    }


    fillMatrix(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    freeMatrix(matrix, rows);

    return 0;
}
