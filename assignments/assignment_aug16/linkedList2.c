#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createLinkedListFromUser(int n) {
    struct node* start = NULL;
    struct node* temp = NULL;
    struct node* ptr = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = value;
        ptr->next = NULL;

        if (start == NULL) {
             start = ptr;
        } else {
            temp->next = ptr;
        }
        temp = ptr;
    }

    return start;
}

void displayLinkedList(struct node* start) {
    struct node* temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* reverseLinkedList(struct node* start) {
    struct node* prev = NULL;
    struct node* current = start;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start = prev;
    return start;
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct node* start = createLinkedListFromUser(n);

    printf("Original Linked List:\n");
    displayLinkedList(start);

    start = reverseLinkedList(start);

    printf("Reversed Linked List:\n");
    displayLinkedList(start);

    return 0;
}