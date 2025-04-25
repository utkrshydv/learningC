#include <stdio.h>
#include <stdlib.h>

#define MAX 100 

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* stack[MAX];
int top = -1;

void push(struct Node* node) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = node;
}

int isEmpty() {
    return top == -1;
}

struct Node* pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return NULL;
    }
    return stack[top--];
}

void inorderTraversal(struct Node* root) {
    struct Node* current = root;
    printf("Inorder traversal: ");
    while (current != NULL || !isEmpty()) {
        while (current != NULL) {
            push(current);
            current = current->left;
        }
        current = pop();
        printf("%d ", current->data);
        current = current->right;
    }
    printf("\n");
}

void preorderTraversal(struct Node* root) {
    if (root == NULL) return;
    printf("Preorder traversal: ");
    push(root);

    while (!isEmpty()) {
        struct Node* current = pop();
        printf("%d ", current->data);
        
        if (current->right != NULL) push(current->right);
        if (current->left != NULL) push(current->left);
    }
    printf("\n");
}

void postorderTraversal(struct Node* root) {
    if (root == NULL) return;
    struct Node* stack2[MAX]; 
    int top2 = -1;
    
    printf("Postorder traversal: ");
    push(root);

    while (!isEmpty()) {
        struct Node* current = pop();
        stack2[++top2] = current;
        
        if (current->left != NULL) push(current->left);
        if (current->right != NULL) push(current->right);
    }
    
    while (top2 != -1) {
        printf("%d ", stack2[top2--]->data);
    }
    printf("\n");
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    inorderTraversal(root);
    preorderTraversal(root);
    postorderTraversal(root);

    return 0;
}

