#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x){
   if(top==MAX-1){
    printf("Stack is full");
    return;
   }
   stack[++top] = x;
   return;
}

void pop(){
  if(top==-1){
    printf("Stack is empty");
    return;
  }
  top--;
}


void display(){
  if(top == -1){
    printf("stack is empty");
    return;
  }
  printf("Stack is: \n");
  for(int i=top; i>=0; i--){
    printf("%d \n", stack[i]);
  }
}

int main(){
  push(1);
  push(2);
  push(3);
  display();
}