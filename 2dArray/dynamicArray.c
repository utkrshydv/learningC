#include <stdio.h>
#include <stdlib.h>


void print2d(int** arr){
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int** create2d(int m, int n){
  int** arr = malloc(sizeof(int*)*m); 
   for(int i=0; i<3; i++){
    arr[i] = malloc(sizeof(int)*n);
  }
  printf("Enter elements: \n");
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      printf("arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  return arr;
}

void free2d(int** arr){
  for(int i=0; i<3; i++){
    free(arr[i]);
    arr[i]=NULL;
  }
  free(arr);
  arr=NULL;
}

void printSparse(int** arr){
  printf("i\tj\tv\t\n");
  for(int i=0; i<=arr[0][2]; i++){
    for(int j=0; j<3; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  } 
}

int** convertToSparse(int** arr){

   int nonZero=0;
   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(arr[i][j]!=0){
         nonZero++;
      }
    }
   }

   int** sparse = malloc(sizeof(int*)*(nonZero+1));
   for(int i=0; i<=nonZero; i++){
    sparse[i] = malloc(sizeof(int)*3);
   }

   int k=1;
   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(arr[i][j] != 0){
        sparse[k][0] = i;
        sparse[k][1] = j;
        sparse[k][2] = arr[i][j];
        k++; 
      }
    }
   }
   sparse[0][0] = 3;
   sparse[0][1] = 3;
   sparse[0][2] = k-1;

  return sparse; 
}

int** sparseMultiply(int** arrA, int** arrB){

  int** product = malloc(sizeof(int*)*4);
  for(int i=0; i<4; i++){
    product[i] = malloc(sizeof(int)*3);
  }

  int k=1;
  product[0][0] = arrA[0][0];
  product[0][1] = arrB[0][1];

  for(int i=1; i<=arrA[0][2]; i++){
    for(int j=1; j<=arrB[0][2]; j++){
      if(arrA[i][1] == arrB[j][0]){
        int row = arrA[i][0];
        int column = arrB[j][1];
        int value = arrA[i][2] * arrB[j][2];

        int found=0;
        for(int x=1; x<k; x++){
          if(product[x][0]==row && product[x][1]==column){
            product[x][2] += value;
            found = 1;
            break;
          }
        }
        if(!found){
          product[k][0] = row;
          product[k][1] = column;
          product[k][2] = value;
          k++;
        }
      }
    }
  }
   product[0][2] = k-1;
   return product;
}

int main(){

  printf("Enter elements for Matrix A: \n");
  int** arrA = create2d(3,3);
  
  printf("Enter elements for Matrix B: \n");
  int** arrB = create2d(3,3);
  
  int** sparseA = convertToSparse(arrA);
  int** sparseB = convertToSparse(arrB);

  printf("Matrix A: \n");
  print2d(arrA);

  printf("Matrix B: \n");
  print2d(arrB);
  
  printf("Matrix A in Sparse Form: \n");
  printSparse(sparseA);

  printf("Matrix B in Sparse Form: \n");
  printSparse(sparseB);

  int** product = sparseMultiply(sparseA, sparseB);
  printf("Product of A and B in Sparse Format: \n");
  printSparse(product);

  free(arrA);
  free(arrB);

  return 0;
}