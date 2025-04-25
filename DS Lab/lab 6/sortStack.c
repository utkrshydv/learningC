//sort stack without using extra stack
//implement priority q using linked list
//priority q using multidim array
#include <stdio.h>

#define MAX 100

int stack1[MAX];

int top1 = -1;

void Push1(int x){
  if(top1==MAX-1){
    printf("stack overflow");
    return;
  }
  stack1[++top1] = x;
}

void Pop1(){
  if(top1==-1){
    printf("stack is empty");
    return;
  }
  return top1--;
}

void Print1(){
  printf("Stack: ");
  for(int i=0; i<=top1; i++){
    printf("%d ", stack1[i]);
  }
  printf("\n");
}



int main(){
   
}