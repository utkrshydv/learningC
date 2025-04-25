#include <stdio.h>
#include <stdlib.h>


void print2d(int** arr, int rows, int columns){
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int** create2d(int rows, int column){
  int** arr = malloc(sizeof(int*)*rows);
  for(int i=0; i<rows; i++){
    arr[i] = malloc(sizeof(int)*column);
  }
  printf("enter elements: \n");
  for(int i=0; i<rows; i++){
    for(int j=0; j<column; j++){
      printf("arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  return arr;
}

void printSparse(int** sparse){
  printf("i  j  value\n");
  for(int i=0; i<sparse[0][2]+1; i++){
      printf("%d  %d  %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
  }
}

int** convert2sparse(int** arr){

  int nonZero = 0;
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
      if(arr[i][j]!=0){
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

int multiplySparse(int** sparseA, int** sparseB){
  int** product = malloc(sizeof(int*)*4);
  for(int i=0; i<4; i++){
    product[i] = malloc(sizeof(int)*3);
  }

  int k=1;
  product[0][0] = sparseA[0][0];
  product[0][1] = sparseB[0][1];

  for(int i=1; i<=sparseA[0][2];i++){
    for(int j=1; j<sparseB[0][2]; j++){
      if(sparseA[i][1]==sparseB[j][0]){
        int row = sparseA[i][0];
        int column = sparseB[j][1];
        int value = sparseA[i][2]*sparseB[j][2];

        int found = 0;
        for(int x=1; x<k; x++){
          if(product[x][0] == row && product[x][1] == column){
            product[x][2]+=value;
            found = 1;
            break;
          }
        }
        if(!found){
          product[k][0] =row;
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

int** addSparse(int** sparseA, int** sparseB){
  if(sparseA[0][0]!=sparseB[0][0] || sparseA[0][1]!=sparseB[0][1]){
    printf("dimensions not equal");
    exit(0);
  }
  int rows = sparseA[0][2] + sparseB[0][2] + 1;  // Allocate enough space
  int** sparseC = malloc(sizeof(int*)*rows);
  for(int i=0; i<rows; i++){
    sparseC[i] = malloc(sizeof(int)*3);
  }

  sparseC[0][0] = sparseA[0][0];
  sparseC[0][1] = sparseA[0][1];

  int a=1, b=1, c=1;

  int rowA = sparseA[0][2];
  int rowB = sparseB[0][2];

  while(a<=rowA && b<=rowB){
    if(sparseA[a][0] == sparseB[b][0]){
      if(sparseA[a][1] == sparseB[b][1]){
        sparseC[c][0] = sparseA[a][0];
        sparseC[c][1] = sparseA[a][1];
        sparseC[c][2] = sparseA[a][2] + sparseB[b][2];
        a++;b++;c++;
      } else {
        if(sparseA[a][1]>sparseB[b][1]){
          sparseC[c][0] = sparseB[b][0];
          sparseC[c][1] = sparseB[b][1];
          sparseC[c][2] = sparseB[b][2];
          b++;c++;
        } else {
          sparseC[c][0] = sparseA[a][0];
          sparseC[c][1] = sparseA[a][1];
          sparseC[c][2] = sparseA[a][2];
          a++;c++;
        }
      }
    } else {
      if(sparseA[a][0]>sparseB[b][0]){
          sparseC[c][0] = sparseB[b][0];
          sparseC[c][1] = sparseB[b][1];
          sparseC[c][2] = sparseB[b][2];
          b++;c++;
      } else {
        sparseC[c][0] = sparseA[a][0];
        sparseC[c][1] = sparseA[a][1];
        sparseC[c][2] = sparseA[a][2];
        a++;c++;
      }
    }
  }

  // Copy remaining elements from sparseA
  while(a <= rowA){
    sparseC[c][0] = sparseA[a][0];
    sparseC[c][1] = sparseA[a][1];
    sparseC[c][2] = sparseA[a][2];
    a++; c++;
  }

  // Copy remaining elements from sparseB
  while(b <= rowB){
    sparseC[c][0] = sparseB[b][0];
    sparseC[c][1] = sparseB[b][1];
    sparseC[c][2] = sparseB[b][2];
    b++; c++;
  }

  sparseC[0][2] = c-1; // Number of non-zero elements in sparseC
  return sparseC;
}

int main(){
  int rows, columns;
  int** arrA = create2d(3,3);
  int** arrB = create2d(3,3);
  print2d(arrA,3,3);
  int** sparseA = convert2sparse(arrA);
  int** sparseB = convert2sparse(arrB);
  int** sparseC = addSparse(sparseA, sparseB);
  printSparse(sparseA);
  printSparse(sparseB);
  printSparse(sparseC);

}