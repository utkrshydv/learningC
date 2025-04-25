#include <stdio.h>
#include <stdlib.h>

void printArray(int** array, int rows, int columns){
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}

int** createArray(int rows, int columns){
  
  int** array = malloc(sizeof(int*)*rows);
  for(int i=0; i<rows; i++){
    array[i] = malloc(sizeof(int)*columns);
  }

  printf("Enter elements: \n");
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      printf("matrix[%d][%d] = ", i, j);
      scanf("%d", &array[i][j]);
    }
  }

  return array;
}

void printSparse(int** sparse){
  printf("i j v\n");
  for(int i=0; i<=sparse[0][2]; i++){
    for(int j=0; j<sparse[0][1]; j++){
      printf("%d ", sparse[i][j]);
    }
    printf("\n");
  }
}

int** convertToSparse(int** array, int rows, int columns){
  int** sparse = malloc(sizeof(int*)*(rows+1));
  for(int i=0; i<=rows; i++){
    sparse[i] = malloc(sizeof(int)*columns);
  }

  int k=1;

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j]!=0){
        sparse[k][0] = i;
        sparse[k][1] = j;
        sparse[k][2] = array[i][j];
        k++;
      }
    }
  }
  sparse[0][0] = rows;
  sparse[0][1] = columns;
  sparse[0][2] = k-1;
  return sparse;
}

int main(){
  int** array = createArray(3,3);
  printf("Matrix is: \n");
  printArray(array,3,3);
  int** sparse = convertToSparse(array, 3,3);

  printf("Matrix in Sparse Format: \n");
  printSparse(sparse);
}