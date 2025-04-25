#include <stdio.h>

int add(int *param1, int *param2){
  int sum = *param1 + *param2;
  return sum;
}

int multiply(int *param1, int *param2){
  int product = *param1 * *param2;
  return product;
}

int findMax(int *param1, int *param2){
  return (*param1 > *param2)? *param1: *param2;
}

int main(){
  int a = 10, b = 20;
  int *ptrA, *ptrB;
  int sum, product, max;

  ptrA = &a;
  ptrB = &b;
  sum = add(&a, &b);
  product = multiply(ptrA , ptrB);
  max = findMax(ptrA, ptrB);


  printf("sum = %d\n", sum);
  printf("product = %d\n", product);
  printf("max = %d\n", max);


}