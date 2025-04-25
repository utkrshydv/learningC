//Rotate an array by k to the right
#include <stdio.h>

void rotate(int *array, int size, int k){
    for(int i=0; i<k; i++){
      int final = array[size-1];
        for(int j = size-2; j>=0; j--){
          array[j+1] = array[j];
        }
      array[0] = final;
    }
}

int main(){
  int array[] = {1,2,3,4,5};
  int size = sizeof(array)/sizeof(array[0]);
  int k = 2;

  rotate(array, size, k);

  for(int i=0; i<size; i++){
    printf("%d", array[i]);
  }

  return 0;
}