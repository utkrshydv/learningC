#include <stdio.h>
#include <stdlib.h>

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
    printf("Stack undeflow");
    return -1;
  }
  return stack[top--];
}

void peek(){
  if(top==-1){
    printf("Stack underflow");
    return;
  }
  printf("Top element is: %d\n", stack[top]);
}

void display(){
  for(int i = top; i>=0; i--){
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main(){
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  push(6);
  push(7);
  push(8);
  push(9);
  push(10);
  // display();
  // pop();
  // display();
  // pop();
  // display();
  // pop();
  // display();
  // peek();
  int x=pop();
  int y=pop();
  printf("%d %d \n", x,y);
  display();
}