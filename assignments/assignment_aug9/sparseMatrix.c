#include <stdio.h>

int main(){
  int rows, cols;
  int array[50][50];
  int sparse[50][50];

  printf("No. of rows: ");
  scanf("%d", &rows);

  printf("No. of columns: ");
  scanf("%d", &cols);

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      printf("Matrix[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
    }
  }

  printf("Elements: \n");
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  int k = 1;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      if(array[i][j] != 0){
        sparse[k][0] = i;
        sparse[k][1] = j;
        sparse[k][2] = array[i][j];
        k++;
      }
    }
  }
  sparse[0][0] = rows;
  sparse[0][1] = cols;
  sparse[0][2] = k-1;

  printf("Sparse: \n");
  for(int i=0; i<k; i++){
    for(int j=0; j<3; j++){
      printf("%d ", sparse[i][j]);
    }
    printf("\n");
  }
}