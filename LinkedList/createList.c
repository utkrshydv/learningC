#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
};

int main(){

  struct node* start = malloc(sizeof(struct node));

  struct node* current = start;

  current->data = 10;
  current->next = NULL;

  current = malloc(sizeof(struct node));

  current->data = 20;
  current->next = NULL;
  start->next = current;

  current = malloc(sizeof(struct node));

  current->data = 30;
  current->next = NULL;
  start->next->next = current;

  struct node* temp = start;

  while(temp){
    printf("%d ", temp->data);
    temp = temp->next;
  }
}