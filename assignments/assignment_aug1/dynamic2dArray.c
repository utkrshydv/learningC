#include <stdio.h>
#include <stdlib.h>

void createArray(int rows, int cols);

int main() {
    int rows, cols;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    createArray(rows, cols);

    return 0;
}

void createArray(int rows, int cols) {
    int i, j;  

    int **array = (int **)malloc(rows * sizeof(int *));

    for (i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
        if (array[i] == NULL) {
            printf("Memory allocation failed\n");
            for (j = 0; j < i; j++) {
                free(array[j]);
            }
            free(array);
            exit(1);
        }
    }
    

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    

    printf("The array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    

    for (i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}
