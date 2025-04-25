#include <stdio.h>
#include <stdlib.h>

void printMatrix(int** arr, int rows, int columns){
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int** createMatrix(int rows, int columns){
 int** arr = malloc(sizeof(int*)*rows);
 for(int i=0; i<rows; i++){
  arr[i] = malloc(sizeof(int)*columns);
 }

 for(int i=0; i<rows; i++){
  for(int j=0; j<columns; j++){
    printf("matrix[%d][%d] = ", i,j);
    scanf("%d", &arr[i][j]);
  }
 }

 return arr;
}

void printSparse(int** arr){
  printf("i j v\n");
  for(int i=0; i<=arr[0][2]; i++){
    for(int j=0; j<arr[0][1]; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int** convertToSparse(int** arr, int rows, int columns){
   
   int count=0;
   for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(arr[i][j] != 0){
        count++;
      }
    }
   }

   int** sparse = malloc(sizeof(int*)*(count+1));
   for(int i=0; i<=count; i++){
      sparse[i] = malloc(sizeof(int)*columns);
   }

  int k=1;
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(arr[i][j]!=0){
        sparse[k][0] = i;
        sparse[k][1] = j;
        sparse[k][2] = arr[i][j];
        k++;
      }
    }
  }
  sparse[0][0] = rows;
  sparse[0][1] = columns;
  sparse[0][2] = k-1;

  return sparse;
}

int** addSparse(int** sparseA, int** sparseB){
  if(sparseA[0][0] != sparseB[0][0] || sparseA[0][1] != sparseB[0][1]){
     printf("Dimensions are not equal");
     exit(0);
  }

  int rows;
  rows = (sparseA[0][2]>sparseB[0][2])? sparseA[0][2]+1 : sparseB[0][2]+1;
  
  int** sparseC = malloc(sizeof(int*)*rows);
  for(int i=0; i<=rows; i++){
    sparseC[i] = malloc(sizeof(int)*3); 
  }
   
  sparseC[0][0] = sparseA[0][0];
  sparseC[0][1] = sparseA[0][1];

  int a=1;
  int b=1;
  int c=1;
  int rowA = sparseA[0][2];
  int rowB = sparseB[0][2];


  while(a<=rowA && b<=rowB){
      if(sparseA[a][0] == sparseB[b][0]){
        if(sparseA[a][1] == sparseB[b][1]){
          sparseC[c][0] = sparseA[a][0];
          sparseC[c][1] = sparseB[a][1];
          sparseC[c][2] = sparseA[a][2] + sparseB[b][2];
          a++;
          b++;
          c++;
        } else {
          if(sparseA[a][1]>sparseB[b][1]){
            sparseC[c][0] = sparseB[b][0];
            sparseC[c][1] = sparseB[b][1];
            sparseC[c][2] = sparseB[b][2];
            b++;
            c++;
          } else{
            sparseC[c][0] = sparseA[a][0];
            sparseC[c][1] = sparseA[a][1];
            sparseC[c][2] = sparseA[a][2];
            a++;
            c++;
          }
        }
      } else{
        if(sparseA[a][0]>sparseB[b][0]){
          sparseC[c][0] = sparseB[b][0];
          sparseC[c][1] = sparseB[b][1];
          sparseC[c][2] = sparseB[b][2];
          c++;
          b++;

        }else{
          if(sparseA[a][0]<sparseB[b][0]){
          sparseC[c][0] = sparseA[a][0];
          sparseC[c][1] = sparseA[a][1];
          sparseC[c][2] = sparseA[a][2];
          c++;
          a++;

          }
        }
      }
    }
    sparseC[0][3] = c;
    printf("%d", c);

  

  return sparseC;
}

int main(){

  int** matrixA = createMatrix(3,3);
  // printMatrix(matrixA,3,3);

  int** matrixB = createMatrix(3,3);
  // printMatrix(matrixB, 3,3);

  int** sparseA = convertToSparse(matrixA, 3,3);
  int** sparseB = convertToSparse(matrixB, 3,3);

  int** sparseC = addSparse(sparseA, sparseB);
 
  printSparse(sparseA);
  printSparse(sparseB);
  printSparse(sparseC);

}