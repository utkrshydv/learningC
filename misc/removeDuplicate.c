#include <stdio.h>

int main(){
  int arr[] = {1,1,2,2,3,3,5,5};
  
  int b=0;

  for(int j=1; j<8; j++){
    if(arr[j] != arr[b]){
      arr[b+1] = arr[j];
      b++;
    }
  } 


  for(int i=0; i<=b; i++){
    printf("%d", arr[i]);
  }

  printf("%d", b);
  
  }