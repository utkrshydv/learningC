#include <stdio.h>
#include <stdlib.h>

int** twod(){
  int** sum = malloc(sizeof(int*)*2);
  for(int i=0; i<2; i++){
    sum[i] = malloc(sizeof(int));
  }

    sum[1][1] = 1;
   //printf("%d", sum[1][1]);
  return sum;
}


int main(){
  int*** storePoly = malloc(sizeof(int**)*3);

    storePoly[2] = twod();

  printf("%d", storePoly[2][1][1]);
  printf("%d", *(*(*(storePoly+2)+1)+1));
}