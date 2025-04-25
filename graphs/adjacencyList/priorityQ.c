#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  int priority;
  struct node *next;
}node;

node* start = NULL;

node* insert(node* start){
  int value, priority;
  node* temp = malloc(sizeof(node));
  printf("Value and priority: ");
  scanf("%d %d", &temp->data, &temp->priority);

  if(start == NULL||priority<start->priority){
    temp->next=start;
    start = temp;
  } else {
    node* ptr = start;
    while(ptr->next!=NULL && ptr->next->priority<=priority){
      ptr = ptr->next;
    }
    temp->next=ptr->next;
    ptr->next = temp;
  } 
  return start;
}

node* delete(node* start){
  node* ptr;
  if(start == NULL){
    printf("underflow");
  } else {
    ptr = start;
    printf("Deleted Item: %d", ptr->next);
    start = start->next;
    free(ptr);
  }
  return start;
}

void display(node* start){
  node* ptr = start;
  if(start == NULL){
    printf("q is empty");
    return;
  }
  printf("Priority Q is: \n");
  while(ptr!=NULL){
    printf("%d(priority = %d)", ptr->data, ptr->priority);
    ptr=ptr->next;
  }
}


int main(){
  int choice;
  do{
    printf("\n *****MAIN MENU*****");
    printf("\n 1. Insert");
    printf("\n 2. Delete");
    printf("\n 3. Display");
    printf("\n 4. Exit");
    printf("\n Enter your option: ");
    scanf("%d", &choice);
    switch(choice){
      case 1: 
        start = insert(start);
        break;
      case 2:
        start = delete(start);
        break;
      case 3:
        display(start);
        break;
    }
  }while(choice!=4);
}



