#include <stdio.h>

#define MAX 101

int A[MAX];
int top = -1;

void Push(int x){
  if(top==MAX-1){
    printf("Stack overflow");
    return;
  }
  A[++top] = x;
}

void Pop(){
  if(top==-1){
    printf("Stack is empty");
    return;
  }
  top--;
}

void Peek(){
  printf("%d", A[top]);
}

int IsEmpty(){
  if(top==-1){
    return 1;
  }
  return 0;
}

void Print(){
  printf("Stack: ");
  for(int i=0; i<=top; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

int main(){
  Push(2);
  Print();
	Push(5);
  Print();
	Push(10);
  Print();
	Pop();
  Print();
	Push(12);
  Print();
  Peek();
}