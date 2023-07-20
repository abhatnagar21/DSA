#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(struct Node** head, int data) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;  
    } else {
        
        struct Node* last = *head;
        while (last->next != *head)
            last = last->next;
			}
        newNode->next = *head;
        last->next = newNode;
        *head = newNode;
    }
}
void display(struct Node* head) {
    struct Node* current = head;
if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);

    printf("\n");
}
int main() {
    struct Node* head = NULL;
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    printf("Circular Linked List: ");
    display(head);

    return 0;
}

