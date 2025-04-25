#include <stdio.h>

int main(){
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {2,3,5,7,9,10,20};
  
  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  int size2 = sizeof(arr2)/sizeof(arr2[0]);
  int arr3[25];

  int i=0, j=0, k=0;

  while(i<size1 && j<size2){
    if(arr1[i]==arr2[j]){
      arr3[k] = arr1[i];
      arr3[k+1] = arr2[j];
      i++;
      j++;
      k+=2;
    } else if(arr1[i]>arr2[j]){
      arr3[k] = arr2[j];
      k++;
      j++;
    } else if(arr1[i]<arr2[j]) {
      arr3[k] = arr1[i];
      k++;
      i++;
    } 
  }

while(i<size1){
  arr3[k] = arr1[i];
  i++;
  k++;
}

while(j<size2){
  arr3[k] = arr2[j];
  j++;
  k++;
}

for(int i=0; i<k; i++){
  printf("%d ", arr3[i]);
}
}
