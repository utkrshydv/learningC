#include <stdio.h>
#include <stdlib.h>

int main(){
  int rows, cols;

  printf("Number of rows & columns: ");
  scanf("%d %d", &rows, &cols);

    int **array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the Sparse matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Original Matrix: \n");

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf(" %d", array[i][j]);
        }
        printf("\n");
     }


    printf("3 tuple representation of Sparse Matrix: \n");

    printf("\n r c v");

    for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
        if(array[i][j] != 0){
          printf("\n %d %d %d", i, j, array[i][j]);
        }
      }
    }

    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}