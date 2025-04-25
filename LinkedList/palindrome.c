#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
  int data;
  struct node* next;
} node;


node* createNode(){
  node* start = NULL;
  node* temp = NULL;
  node* ptr = NULL;

  for(int i=0; i<5; i++){
    temp = malloc(sizeof(node));
    printf("Value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(start == NULL){
      start = temp;
    } else {
    ptr = start;
    while(ptr->next!=NULL){
        ptr = ptr->next;
      }
    ptr->next = temp;
    }
  }
  return start;
}

node* reverse(node* start){
  if(start==NULL || start->next==NULL){
    return start;
  }
  node* newhead = reverse(start->next);
  node* front = start->next;
  front->next = start;
  start->next = NULL;

  return newhead;
}

bool checkPalindrome(node* start){
  if(start==NULL || start->next==NULL) return true;

  node* slow = start;
  node* fast = start;
  while(fast->next !=NULL && fast->next->next !=NULL){
    slow = slow->next;
    fast = fast->next->next;
  }

  node* newhead = reverse(slow->next);
  node* first = start;
  node* second = newhead;
  while(second!=NULL){
    if(first->data != second->data){
      reverse(newhead);
      return false;
    }
    first = first->next;
    second = second->next;
  }
  reverse(newhead);
  return true;
}

int main(){
  node* start = createNode();
  if(checkPalindrome(start)){
    printf("Is Palindrome");
  } else {
    printf("Not palindrome");
  }
}