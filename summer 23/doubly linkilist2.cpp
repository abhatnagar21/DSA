#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;

    if (*head == NULL) {
        newNode->next = NULL;
        *head = newNode;
    } else {
       
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

void display(struct Node* head) {
    struct Node* current = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Forward: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    printf("Backward: ");
    while (head->next != NULL)
        head = head->next;
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->prev;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);

    // Display the doubly linked list
    display(head);

    return 0;
}


