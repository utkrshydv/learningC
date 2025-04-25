#include <stdio.h>

int main(){
  int arr[] = {1,5,7,1,2,0,6};
  int req = 6;

  for(int i=0; i<7; i++){
    for(int j=1; j<6; j++){
      if(arr[i]+arr[j] == req){
        printf("%d+%d = %d\n", arr[i], arr[j], req);
      }
    }
  }
}