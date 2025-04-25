#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Number of terms: ");
  scanf("%d", &n);

  int storePoly[2][n];

  for(int i=0; i<n; i++){
     printf("Coefficient: ");
     scanf("%d", &storePoly[0][i]);
     printf("Exponent: ");
     scanf("%d", &storePoly[1][i]);
  }

  printf("Polynomial is: \n");
  printf("f(x) = ");
  for(int i=0; i<n; i++){
    if(i>0 && storePoly[0][i]>0){
      printf(" + ");
    }
    if(storePoly[0][i]>0){
      if(storePoly[1][i]==0){
        printf("%d", storePoly[0][i]);
      } else{
        printf("%dx^%d", storePoly[0][i], storePoly[1][i]);
      }
    }
  }
}