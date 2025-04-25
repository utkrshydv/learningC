// operation :double linked list  insert node at the begining, at end, insert at given position, delete from begining, delete the last, delete at given position, reverse the list, traverse the list

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
  struct node* prev;
} node;

struct node* start = NULL;

void insertAtBegining(int value){
   struct node* temp = malloc(sizeof(node));
   temp->data = value;
   temp->next = start;
   temp->prev = NULL;

   if(start != NULL){
    start->prev = temp;
   }

   start = temp;
}

void insertAtEnd(int value){
  node* temp = malloc(sizeof(node));

  temp->data = value;
  temp->next = NULL;

  if(start == NULL){
    temp->prev = NULL;
    start = temp;
    return;
  }

  node* ptr = start;
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }

  ptr->next = temp;
  temp->prev = ptr;
}

void deleteFromStart(){
  if(start==NULL){
    printf("List is empty");
    return;
  }

  node* temp = start;
  start = start->next;
  if(start!=NULL){
    start->prev = NULL;
  }
  free(temp);
  printf("Node deleted");
}

void deleteFromLast(){
  if(start == NULL){
    printf("List is empty");
    return;
  }
  node* ptr = start;

  if(ptr->next == NULL){
    start == NULL;
    free(ptr);
    return;
  }
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  node* temp = ptr->prev;
  temp->next = NULL;
  free(ptr);
}

void insertAtPosition(int position, int value){
  node* temp = malloc(sizeof(node));
  temp->data = value;

  node* ptr = start;
  int i = 1;
  while(i<position){
    ptr=ptr->next;
    i++;
  }
}

void traverse(){
  if(start == NULL){
    printf("List is empty");
    return;
  }
  node* ptr = start;
  while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;
  }
}

int main(){
  insertAtBegining(1);
  insertAtBegining(0);
  insertAtEnd(2);
  traverse();
}