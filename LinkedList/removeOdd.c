#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;

void printList(node* start){
  while(start!=NULL){
    printf("%d ", start->data);
    start=start->next;
  }
}

node* createList(){
  node* start = NULL;
  node* ptr = NULL;
  node* temp = NULL; 

  for(int i=0; i<5; i++){
    temp = malloc(sizeof(node));
    temp->data = i+1;
    temp->next = NULL;

    if(start == NULL){
      start = temp;
    } else {
      ptr = start;
      while(ptr->next!=NULL){
        ptr=ptr->next;
      }
       ptr->next = temp;
    }
  }
  return start;
}

node* removeOdd(node* start){
  node* current = start;
  node* prev = NULL;

  int position = 1;

  while(current!=NULL){
    if(position%2!=0){
      if(prev==NULL){
        start = start->next;
      } else{
       prev->next = current->next;
      }
      current = current->next;
    } else {
      prev = current;
      current = current->next;
    }
    position++;
  }
  return start;
}

int main(){
  node* start = createList();
  start = removeOdd(start);
  printList(start);

}