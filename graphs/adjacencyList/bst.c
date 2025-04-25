#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *left, *right;
}node;

node* createNode(int value){
  node* temp = malloc(sizeof(node));
  temp->data = value;
  temp->left = temp->right = NULL;
  return temp;
}

node* insertNode(node* node, int value){
  if(node == NULL){
    return createNode(value);
  }
  if(value<node->data){
    node->left = insertNode(node->left, value);
  } else if(value>node->data){
    node->right = insertNode(node->right, value);
  }
  return node;
}

void inOrder(node* root){
  if(root!=NULL){
    inOrder(root->left);
    printf(" %d ", root->data);
    inOrder(root->right);
  }
}

void postOrder(node* root){
  if(root!=NULL){
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ", root->data);
  }
}

void preOrder(node* root){
  if(root!=NULL){
    printf(" %d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
  }
}

node* search(node* root, int value){
  if(root==NULL|| root->data==value){
    if(root!=NULL){
      printf("Value found: %d", root->data);
    } else {
      printf("value not found");
    }
    return root;
  }
  if(value<root->data){
    return search(root->left, value);
  }
  if(value>root->data){
    return search(root->right, value);
  }
}

node* findMin(node* node){
  while(node->left != NULL){
    node=node->left;
  }
  return node;
}

node* delete(node* root, int value){
  if(root==NULL){
    printf("valuenot found in the tree\n");
    return root;
  }
  if(value<root->data){
    root->left = delete(root->left, value);
  }
  else if(value>root->data){
    root->right = delete(root->right, value);
  }
  else{
    if(root->left == NULL && root->right == NULL){
      free(root);
      root = NULL;
    } else if(root->left == NULL){
      node* temp = root;
      root = root->right;
      free(temp);
    }
    else if(root->right == NULL){
      node* temp = root;
      root=root->left;
      free(temp);
    }
    else{
      node* temp = findMin(root->right);
      root->data = temp->data;
      root->right= delete(root->right, temp->data);
    }
  }
  return root;
}