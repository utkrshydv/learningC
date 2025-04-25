// stack using linked list


#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data; 
  struct node* next;
} node;

node* top = NULL;

void Print(){
  printf("Stack: ");
  node* ptr = top;
  while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

void Push(int value){
  node* temp = malloc(sizeof(node));
  temp->data = value;
  temp->next = top;
  top = temp;
}

void Pop(){
  if(top==NULL){
    printf("stack is empty");
    return;
  }
  node* temp = top;
  top = top->next;
  free(temp);
}

void Peek(){
   if(top==NULL){
    printf("stack is empty");
    return;
  }
  printf("Last Element: %d ", top->data);
}

int main(){
  Push(1); Print();
  Push(2); Print();
  Push(3); Print();
  Push(4); Print();
  Pop(); Print();
  Peek();
}