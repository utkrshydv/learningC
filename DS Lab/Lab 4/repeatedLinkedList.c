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

node* deleteRepeated(node* start){
  int storeData;
  node* temp = start;
  node* temp2 = start;
  node* ptr = start;
  
}

int main(){
  int n;
  node* start = NULL;
  node* newList = NULL;
  printf("No. of nodes: ");
  scanf("%d", &n);
  start = createLinkedList(n);
  printList(start);
  return 0;
}