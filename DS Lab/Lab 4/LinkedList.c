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

node* createLinkedList(int n){
  node* start = NULL;
  node* temp = NULL;
  node* ptr = NULL;

  for(int i=0; i<n; i++){
    temp = (node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(start==NULL){
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

node* insertBegining(node* start){
  node* temp = (node*)malloc(sizeof(node));
  printf("enter value to enter: ");
  scanf("%d", &temp->data);
  temp->next = start;
  start = temp;
  return start;
}

int main(){
  int n;
  node* start = NULL;
  node* newList = NULL;
  printf("No. of nodes: ");
  scanf("%d", &n);
  start = createLinkedList(n);
  printList(start);
  newList = insertBegining(start);
  printList(newList);
  return 0;
}