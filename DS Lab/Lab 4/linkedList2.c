#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;

void printList(node* startCopy){
  while(startCopy!=NULL){
    printf("%d ", startCopy->data);
    startCopy = startCopy->next;
  }
}

node* createList(int n){
  node* start = NULL;
  node* temp = NULL;
  node* ptr = NULL;

  for(int i=0; i<n; i++){
    temp = malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(start==NULL){
      start = temp;
    } else{
      ptr = start;
      while(ptr->next!=NULL){
        ptr = ptr->next;
      }
      ptr->next = temp;
    }
  }
  return start;
}

node* insertBegining(node* start){
  node* temp = malloc(sizeof(node));
  printf("Enter value to insert: ");
  scanf("%d", &temp->data);
  temp->next = start;
  start = temp;
  return start;
}

int main(){
  int n, choice;
  printf("Number of nodes: ");
  scanf("%d", &n);

  node* start = NULL;
  start = createList(n);
  node* newList = NULL;

  printf("*****MENU*****\n");
  printf("1. Insert at the begining and traverse\n");
  printf("2. Traverse\n");
  

  printf("Enter Choice: ");
  scanf("%d", &choice);

  switch(choice){
    case 1: 
      newList = insertBegining(start);
      printList(newList);
     break;
    case 2: 
      printf("Current Linked List is: ");
      printList(start);
     break;
    default: 
     printf("Please enter a valid choice.");
  }
  return 0;
}