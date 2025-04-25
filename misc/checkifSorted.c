#include <stdio.h>

int main(){
  int arr[]={1,2,3,7,5,9,8};

  for(int i=1; i<6; i++){
    if(arr[i] > arr[i-1]){
      printf("Not sorted");
      break;
    }
  }

}