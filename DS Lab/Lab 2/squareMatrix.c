#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int rows, int cols);
void fillMatrix(int** array, int rows, int cols);
void printUpperTriangular(int** array, int rows, int cols);
int countNonZeroElements(int** array, int rows, int cols);
void printNonZeroAboveBelowDiagonal(int** array, int rows, int cols);
void freeMatrix(int** array, int rows);

int main() {
    int rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &cols);

    int** array = allocateMatrix(rows, cols);

    fillMatrix(array, rows, cols);

    printUpperTriangular(array, rows, cols);

    int nonZeroCount = countNonZeroElements(array, rows, cols);
    printf("Number of non-zero elements: %d\n", nonZeroCount);

    printNonZeroAboveBelowDiagonal(array, rows, cols);
    freeMatrix(array, rows);

    return 0;
}

int** allocateMatrix(int rows, int cols) {
    int** array = (int **)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
    }
    return array;
}

void fillMatrix(int** array, int rows, int cols) {
    printf("Enter elements: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void printUpperTriangular(int** array, int rows, int cols) {
    printf("Upper Triangular Matrix: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j >= i) {
                printf("%d ", array[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int countNonZeroElements(int** array, int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}

void printNonZeroAboveBelowDiagonal(int** array, int rows, int cols) {
    printf("Non-zero elements above the diagonal:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (array[i][j] != 0) {
                printf("array[%d][%d] = %d\n", i, j, array[i][j]);
            }
        }
    }

    printf("Non-zero elements below the diagonal:\n");
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            if (array[i][j] != 0) {
                printf("array[%d][%d] = %d\n", i, j, array[i][j]);
            }
        }
    }
}


void freeMatrix(int** array, int rows) {
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}
