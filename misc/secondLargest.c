#include <stdio.h>

int main(){
  int arr[] = {1,2,5,4,3};
  int largest=0;
  int secondLargest=0;

  for(int i=0; i<5; i++){
    if (arr[i]>largest){
      secondLargest = largest;
      largest = arr[i];
    }else if(arr[i]>secondLargest && arr[i]<largest){
        secondLargest = arr[i];
    }
  }

  printf("%d", secondLargest);


}