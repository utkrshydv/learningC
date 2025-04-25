#include <stdio.h>

void displayArray(int *p){
   for(int i=0; i<5; i++){
    printf("%d\n", *(p+i));
  }
}

void sumArray(int *p){
  int sum=0;
  for(int i=0; i<5; i++){
       sum+=*(p+i);
  }

  printf("%d", sum);
}

void sumTwoArrays(int *p, int *q){
  int sum = 0;
  for(int i=0; i<5; i++){
    sum+=*(p+i) + *(q+i);
  }

  printf("%d", sum);
}

void copyArray(int *p, int *q){
  for(int i=0; i<5; i++){
    *(q+i) = *(p+i);
  }
  displayArray(q);
}

void reverseArray(int *p, int *q){
  for(int i=4; i>=0; i--){
    *(q+i) = *(p);
     p++;    
  }

  displayArray(q);
}

void searchArray(int *p, int m){
   int flag = 0; 
   for(int i=0; i<5; i++){
    if(*(p+i) == m){
      printf("Element found at index: %d", i);
      flag = 1;
      break;
    } 
   }
   if(flag==0){
    printf("Element not in array");
   }
}



void sortArray(int *p, int m){
  int temp;
  for(int i=0; i<m-1; i++){
    for(int j=0; j<m-1; j++){
      if(*(p+j)>*(p+j+1)){
        temp = *(p+j);
        *(p+j) = *(p+j+1);
        *(p+j+1) = temp;
      }
    }
  }
  
}

int main(){
  int array[] = {5,4,3,2,1};
  int array2[5];
  int *p, *q;
  p = array;
  q = array2;
  // displayArray(p);
  // sumArray(p);
  //sumTwoArrays(p, q);
  //copyArray(p, q);
  // reverseArray(p, q);
  // searchArray(p, 5);  
  sortArray(p, 5);
  displayArray(p);
}