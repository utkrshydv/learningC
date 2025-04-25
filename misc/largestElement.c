#include <stdio.h>

int main(){
  int arr[] = {10,1,2,3,4,5,8,9};
  int largest = 0;

  for(int i=0; i<8; i++){
      if(arr[i]>largest){
        largest = arr[i];
      }
  }
  printf("%d", largest);
}