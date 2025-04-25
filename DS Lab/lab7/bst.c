// menu driven program to create bst and do the following
// inorder traverse
// preorder traverse
// postorder traverse
// delete a node in bst
// search an element

#include <stdio.h>
#include <stdlib.h>

int flag = 0;

typedef struct bstNode{
  int data;
  struct bstNode *left, *right;
} bstNode;

bstNode* createNode(int value){
   bstNode* temp = malloc(sizeof( bstNode));
   temp->data = value;
   temp->left = temp->right = NULL;
   return temp;
}

bstNode* insertNode(bstNode* node, int value){
  if(node == NULL){
    return createNode(value);
  }
  if(value<node->data){
    node->left = insertNode(node->left, value);
  }
  else if(value>node->data){
    node->right = insertNode(node->right, value);
  }
  return node;
}

void inOrder(bstNode* root){
  if(root!=NULL){
    inOrder(root->left);
    printf(" %d ", root->data);
    inOrder(root->right);
  }
}

void preOrder(bstNode* root){
  if(root!=NULL){
    printf(" %d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
  }
}

void postOrder(bstNode* root){
  if(root!=NULL){
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ", root->data);
  }
}

bstNode* search(bstNode* root, int value){
  if(root==NULL ||  root->data == value){
    if(root!=NULL){
      printf("Value found: %d", root->data);
      flag = 1;
    } else {
      printf("Value not found");
    }
    return root;
  }
  if(root->data<value){
    return search(root->right, value);
  }
  if(root->data>value){
    return search(root->left, value);
  }
}

bstNode* findMin(bstNode* node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node;  // The leftmost node is the smallest value
}

bstNode* delete(bstNode* root, int value) {
    if (root == NULL) {
        printf("Value not found in the tree.\n");
        return root;
    }

    if (value < root->data) {
        root->left = delete(root->left, value);
    }
    else if (value > root->data) {
        root->right = delete(root->right, value);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);  
            root = NULL; 
        }
        else if (root->left == NULL) {
            bstNode* temp = root;
            root = root->right;  
            free(temp);  
        }
        else if (root->right == NULL) {
            bstNode* temp = root;
            root = root->left;  
            free(temp);  // Free the old node
        }
        // Case 3: Node with two children
        else {
            // Find the in-order successor (smallest value in the right subtree)
            bstNode* temp = findMin(root->right);

            // Replace the node's value with the in-order successor's value
            root->data = temp->data;

            // Delete the in-order successor recursively
            root->right = delete(root->right, temp->data);
        }
    }
    return root;
}


int main(){
  int choice, value;
  int target, target2;
  bstNode* root = NULL;

  root = insertNode(root, 60);
  insertNode(root, 50);
  insertNode(root, 40);
  insertNode(root, 55);
  insertNode(root, 70);

  printf("****MAIN MENU****\n");
  printf("1. insert a node in tree\n");
  printf("2. inorder traversal\n");
  printf("3. preorder traversal\n");
  printf("4. postorder traversal\n");
  printf("5. search for a value\n");
  printf("6. delete a value\n");
  printf("7. exit\n");
  
  do{
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    switch(choice){
      case 1: 
        printf("enter the value to be inserted: ");
        scanf("%d", &value);
        insertNode(root, value);
      break;
      case 2:
        inOrder(root);
        break;
      case 3:
        preOrder(root);
        break;
      case 4:
        postOrder(root);
        break;
       case 5:
        printf("enter value to search for: ");
        scanf("%d", &target);
        search(root, target);
        break;
      case 6:
       printf("Enter value to be deleted: ");
       scanf("%d", &target2);
       delete(root, target2);
       break;
    }
  } while(choice!=7);
}