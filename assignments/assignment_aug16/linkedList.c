#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* next;
};

int main(){

  struct node* start = malloc(sizeof(struct node));

  start->data = 10;
  start->next = NULL;

  struct node* ptr = malloc(sizeof(struct node));  

  ptr->data = 20;
  ptr->next = NULL;
  start->next = ptr;

  ptr = malloc(sizeof(struct node));

  ptr->data = 30;
  ptr->next = NULL;
  start->next->next = ptr;

  struct node* temp = start;

  printf("Original Linked List: \n");

  while(temp){
    printf("%d\n",temp->data);
    temp = temp->next;
  }

  //to reverse  

  struct node* before = NULL;
  struct node* after = NULL;

  while(start!=NULL){
    after = start->next;
    start->next = before;
    before = start;
    start = after;
  }

  start = before;

  struct node* temp2 = start;

  printf("Reversed Linked List: \n");

  while(temp2){
    printf("%d\n",temp2->data);
    temp2 = temp2->next;
  }


  return 0;

}