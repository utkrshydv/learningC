#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *left, *right;
} node;


node* createTree(){
  int data;
  node* newNode = malloc(sizeof(node));
  printf("Enter data (-1 for no node): ");
  scanf("%d", &data);
  if(data == -1){
    return 0;
  }
  newNode->data = data;
  printf("left Child of %d: \n", data);
  newNode->left = createTree();
  printf("Right Child of %d: \n", data);
  newNode->right = createTree();
  return newNode;
}

void inOrder(node* root){
  if(root!=NULL){
    inOrder(root->left);
    printf(" %d ", root->data);
    inOrder(root->right);
  }
}

int main(){
  node* root = createTree();
  inOrder(root);
}