#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;


void printList(node* start){
  while(start!=NULL){
    printf("%d ", start->data);
    start = start->next;
  }
}

node* createList(){
  node* start = NULL;
  node* temp = NULL;
  node* ptr = NULL;
  for(int i=0; i<5; i++){
    temp = malloc(sizeof(node));
    temp->data = i;
    temp->next = NULL;

    if(start == NULL){
      start = temp;
    }else{
      ptr = start;
      while(ptr->next != NULL){
        ptr = ptr->next;
      }
      ptr->next = temp;
    }
  }
  return start;
}

int add(node* start){
  node* ptr = start;
  int sum = 0;
  while(ptr!=NULL){
    sum+=ptr->data;
    ptr=ptr->next;
  }
  return sum; 
}

node* removeOdd(node* start){
  int position = 1;
  node* current = start;
  node* prev = NULL;

 while(current != NULL){
  if(position %2 != 0){
    if(prev == NULL){
      start=current->next;
    } else {
      prev->next = current -> next;
    }
    current = current->next;
  } else {
    prev = current;
    current = current -> next;
  }
  position++;
 }
 return start;
}

int main(){
  node* start = createList(start);
  printList(start);
  printf("\n");
  node* noOdd = removeOdd(start);
  printList(noOdd);
}