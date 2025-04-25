#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
}node;

void printList(node* start){
  while(start!=NULL){
    printf("%d ", start->data);
    start=start->next;
  }
}

node* createNode(){
  node* start = NULL;
  node* temp = NULL;
  node* ptr  = NULL;

  for(int i=0; i<5; i++){
    temp = (node*)malloc(sizeof(node));
    temp->data = i+1;
    temp->next = NULL;

    if(start == NULL){
      start = temp;
    } else {
      ptr = start;
      while(ptr->next!=NULL){
        ptr = ptr->next;
      }
      ptr->next = temp;
    }
    
  }
  return start;
}

node* reverseList(node* start){
  node* prev = NULL;
  node* temp = start;
  node* front = NULL;

  while(temp!=NULL){
    front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front;
  }
  start = prev;

  return start;
}

node* recursionReverse(node* start){
  if(start == NULL || start -> next == NULL){
    return start;
  }

  node* newStart = recursionReverse(start->next);
  node* front = start -> next;
  front->next = start;
  start->next = NULL;

  return newStart;
}

int main(){
  node* start = createNode();
  printList(start);
  node* reverse =  reverseList(start);
   printList(reverse);
  node* rcrvsvReverse = recursionReverse(reverse);
  printList(rcrvsvReverse);

}