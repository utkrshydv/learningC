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
    temp->data = i+1;
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

node* removeOdd(node* start){
  node* current = start;
  node* prev = NULL;
  int position = 1;

  while(current!=NULL){
    if(position%2!=0){
      if(prev == NULL){
        start = start->next;
      } else {
        prev->next = current->next;
        
      }
      node* temp = current;
      current = current->next;
      free(temp);
    } else {
      prev = current;
      current = current->next;
    }
    position++;
  }
  return start;
}

node* removeEven(node* start){
  node* current = start;
  node* prev = start;
  int position = 1;

  while(current!=NULL){
    if(position%2==0){
    prev->next = current->next;
    prev = current->next;
    node* temp = current;
    current = current->next;
    free(temp);
    } else{
      current = current->next;
    }
    position++;
  }
  return start;
}
node* reverse(node* start) {
    if (start == NULL || start->next == NULL) {
        // If the list is empty or has one node, return the start as the new head
        return start;
    }

    // Recursively reverse the rest of the list
    node* newHead = reverse(start->next);

    // Reverse the pointers
    start->next->next = start;  // Point the next node's next to the current node
    start->next = NULL;         // Set the current node's next to NULL

    // Return the new head of the reversed list
    return newHead;
}




int main(){
  node* start = createList(start);
 // start = removeEven(start);
  printList(start);
  start = reverse(start);
  printList(start);
  // node* noOdd = removeOdd(start);
  // printList(noOdd);
}