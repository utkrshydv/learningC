#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int value){
  if(top==MAX-1){
    printf("Stack overflow");
    return;
  }
  stack[++top] = value;
}

int pop(){
  if(top==-1){
    printf("Stack underflow");
    return -1;
  }
  return stack[top--];
}

int* revArray(int* arr, int size){
  for(int i=0; i<size; i++){
    push(arr[i]);
  }
  for(int i=0; i<size; i++){
    arr[i] = pop();
  }

  return arr;
}

int main(){
  int array[] = {1,2,3,4,5};
  int* newArray = revArray(array, 5);
  for(int i=0; i<5; i++){
    printf("%d ",newArray[i]);
  }
}