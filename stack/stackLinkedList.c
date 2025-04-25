#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;

struct node* top = NULL;

void Print(){
  node* temp = top;
  printf("Stack: ");
  while(temp!=NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void Push(int x){
  node* temp = malloc(sizeof(node));
  temp->data = x;
  temp->next = top;
  top = temp;
}

void Pop(){
  if(top == NULL){
    printf("Stack is empty");
    return;
  }
  node* temp = top;
  top = top->next;
  free(temp);
}

void Peek(){
  if(top == NULL){
    printf("Stack is empty");
    return;
  }
  printf("%d", top->data);
}

int main(){
  Push(10); Print();
  Push(20); Print();
  Push(30); Print();
  Push(40); Print();
  Pop(); Print();
  Peek();
}