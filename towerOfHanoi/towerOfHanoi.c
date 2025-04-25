#include <stdio.h>

void TOH(int numberOfDiscs, int Beg, int Aux, int End){
  if(numberOfDiscs > 0){
    TOH(numberOfDiscs-1, Beg, End, Aux);
    printf("Move a Disc from %d to %d", Beg, End);
    TOH(numberOfDiscs-1, Aux, Beg, End);
  }
}

int main(){
  TOH(3, 1, 2, 3);
  return 0;
}