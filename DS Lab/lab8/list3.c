#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    struct Node* mergedList = NULL;
    struct Node *temp1 = list1, *temp2 = list2;

    while (temp1 != NULL || temp2 != NULL) {
        while (temp1 != NULL && temp1->data % 2 == 0) {
            temp1 = temp1->next;
        }
        if (temp1 != NULL) {
            appendNode(&mergedList, temp1->data);
            temp1 = temp1->next;
        }

        while (temp2 != NULL && temp2->data % 2 != 0) {
            temp2 = temp2->next;
        }
        if (temp2 != NULL) {
            appendNode(&mergedList, temp2->data);
            temp2 = temp2->next;
        }
    }

    return mergedList;
}

int main() {
    struct Node* list1 = NULL;
    appendNode(&list1, 2);
    appendNode(&list1, 4);
    appendNode(&list1, 6);
    appendNode(&list1, 8);
    appendNode(&list1, 10);
    appendNode(&list1, 12);
    appendNode(&list1, 14);
    
    struct Node* list2 = NULL;
    appendNode(&list2, 2);
    appendNode(&list2, 4);
    appendNode(&list2, 6);
    appendNode(&list2, 8);
    appendNode(&list2, 10);
    appendNode(&list2, 12);
    appendNode(&list2, 14);
    appendNode(&list2, 16);
    
    printf("List 1: ");
    displayList(list1);
    printf("List 2: ");
    displayList(list2);
    
    struct Node* mergedList = mergeLists(list1, list2);
    printf("Merged List: ");
    displayList(mergedList);
    
    return 0;
}
