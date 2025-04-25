#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;

void printList(node* start){
  node* ptr = start;
  do{
    printf("%d ", ptr->data);
    ptr = ptr->next;
  } while(ptr != start);
}

node* createList(int n){
  node* start = NULL;
  node *temp = NULL;
  node *ptr = NULL;
  for(int i=0; i<n; i++){
    temp = malloc(sizeof(node));
    temp->data = i;
    temp->next = NULL;

    if(start == NULL){
      start = temp;
      start->next = start;
    } else {
      ptr = start; 
      while(ptr->next != start){
        ptr=ptr->next;
      }
      ptr->next = temp;
      temp->next = start;
    }
  }
  return start;
}

node* insert(node* start){
  node* ptr = start;
  while(ptr->next!=start){
    ptr = ptr->next;
  }
  node* temp = malloc(sizeof(node));
  temp->data = 100;
  temp->next = start;

  ptr->next = temp;

  return start;
}


int main(){
   node* start = NULL;
   start = createList(5);
   printList(start);
   node* newList = insert(start);
   printList(newList);
}