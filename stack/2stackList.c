#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;

node* top = NULL;

void push(int value){
  node* temp = (node*)malloc(sizeof(node));
  temp->data = value;
  if(top==NULL){
    temp->next = NULL;
    top=temp;
    return;
  }
  temp->next = top;
  top = temp;
}

int pop(){
  if(top==NULL){
    printf("Stack undeflow");
    return -1;
  }
  int value = top->data;
  node* temp = top;
  top = top->next;
  free(temp);
  return value;
}

void peek(){
  if(top==NULL){
    printf("Stack underflow");
  }
  printf("Element at the top is: %d\n", top->data);
}

void display(){
  if(top==NULL){
    printf("Stack undeflow");
    return;
  }
  node* ptr = top;
  while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;
  }
  printf("\n");
}

int main(){
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  display();
  peek();
  int x = pop();
  peek();
  display();
  int y = pop();
  peek();
  display();
  printf("%d %d\n", x,y);
}
