#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
} node;

void printList(node* start){
  node* temp1 = start;
  while(temp1!=NULL){
    printf("%d ", temp1->data);
    temp1=temp1->next;
  }
  printf("\n");
}

node* createList(int n){
  node* start = NULL;
  node* temp = NULL;
  node* ptr = NULL;

  for(int i=0; i<n; i++){

    temp = (node*)malloc(sizeof(node));
    printf("Enter data for node %d: ", i);
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(start==NULL){
      start = temp;
    } else {
      ptr = start;
      while(ptr->next != NULL){
        ptr = ptr->next;
      }
      ptr->next = temp;
    }
  }
  return start;
}

node* insert(node* start, int data, int n){
  node* temp = malloc(sizeof(node));
  temp->data = data;
  temp->next = NULL;

  if(n==1){
    temp->next = start;
    start = temp;
    return start;
  }

  node* ptr = start;
  for(int i=1; i<n-1; i++){
    ptr = ptr->next;
  }
  temp->next = ptr->next;
  ptr->next  = temp;

  return start;
}

void delete(node* start, int n){
  struct node* temp = start;
  if(n==1){
    start = temp->next;
    free(temp);
    return;
  }

  for(int i=1; i<n-1; i++){
    temp = temp->next;
  }

  node* ptr = temp->next;
  temp->next= ptr->next;
  free(ptr);
}

int main(){
  int n;
  node* start = NULL;

  printf("no. of nodes: ");
  scanf("%d", &n);

  start = createList(n);
  printList(start);
  start = insert(start, 5, 2);
  printList(start);
  delete(start, 3);
  printList(start);

}