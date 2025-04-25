#include <stdio.h>

int main(){
  int arr[] = {-1,2,3,4,5,6};

  int product = 1;
  int maxProd = 1;
  int k=3;

  int i=0; 
  int j=0;

  while(j<6){
    product*=arr[j];
    if(j-i+1==k){
      if(product>maxProd){
        maxProd = product;
      }
      product/=arr[i];
      i++;
    }
    j++;
  }

  printf("%d", maxProd);
}