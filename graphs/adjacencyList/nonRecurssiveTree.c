#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct node{
  int data;
  struct node *left, *right;
} node;

node* createNode(int data){
  node* newNode = malloc(sizeof(node));
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

node* stack[MAX];
int top=-1;

void push(node* node){
  if(top==MAX-1){
    printf("Stack Overflow\n");
    return;
  }
  stack[++top] = node;
}

int isEmpty(){
  return top == -1;
}

node* pop(){
  if(isEmpty()){
    printf("Stack underflow\n");
    return NULL;
  }
  return stack[top--];
}

void inorderTraversal(node* root){
  node* current = root;
  printf("inorder traversal: ");
  while(current!=NULL|| !isEmpty()){
    while(current !=NULL){
      push(current);
      current = current->left;
    }
    current = pop();
    printf("%d ", current->data);
    current = current->right;
  }
}

void preorderTraversal(node* root){
  if(root==NULL){
    return;
  }
  printf("Preorder traversal: ");
  push(root);

  while(!isEmpty()){
    node* current = pop();
    printf("%d ", current->data);

    if(current->right!=NULL){
      push(current->right);
    }
    if(current->left != NULL){
      push(current->left);
    }
  }
  printf("\n");
}

void postorderTraversal(node* root) {
    if (root == NULL) return;
    node* stack2[MAX]; // Second stack for reverse order
    int top2 = -1;
    
    printf("Postorder traversal: ");
    push(root);

    while (!isEmpty()) {
        node* current = pop();
        stack2[++top2] = current;
        
        if (current->left != NULL) push(current->left);
        if (current->right != NULL) push(current->right);
    }
    
    // Pop all nodes from stack2 to get the correct postorder sequence
    while (top2 != -1) {
        printf("%d ", stack2[top2--]->data);
    }
    printf("\n");
}

// Main function to test the program
int main() {
    // Constructing the binary tree
    node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Performing traversals
    inorderTraversal(root);
    preorderTraversal(root);
    postorderTraversal(root);

    return 0;
}

