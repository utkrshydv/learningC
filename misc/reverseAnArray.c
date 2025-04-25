#include <stdio.h>

int main(){
//   int arr1[] = {1,2,3,4,5,6,7};

//   int *ptr = arr1;

//   int size = sizeof(arr1)/sizeof(arr1[0]);

//   int i=0;

//   while(i<size-1){
//     ptr++;
//     i++;
//   }

//   int revArray[size];

//   for(int i=0; i<size; i++){
//     revArray[i] = *ptr;
//     ptr--;
//   }

//  for(int i=0; i<size; i++){
//   printf("%d ", revArray[i]);
//  }

int arr[] = {1,2,3,4,5,6,7};

for(int i=0; i<3; i++){
    int a = arr[i];
    arr[i] = arr[7-i-1];
    arr[7-i-1] = a;
}

for(int i=0; i<7; i++){
  printf("%d ", arr[i]);
  }
}