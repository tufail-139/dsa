#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create and insert node at end
void create(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to display list in reverse
void display_reverse(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    // Now temp is at the last node
    printf("List in reverse:\n");
    while (temp != NULL) {
        printf("Data = %d\n", temp->data);
        temp = temp->prev;
    }
}

// Function to insert after the first node 
void insert_after_first(struct Node* head, int data) {
    if (head == NULL) return;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    newNode->next = head->next;
    newNode->prev = head;

    if (head->next != NULL)
        head->next->prev = newNode;

    head->next = newNode;
}

// Function to delete the first node
void delete_first(struct Node** head) {
    if (*head == NULL) return;

    struct Node* temp = *head;
    *head = (*head)->next;

    if (*head != NULL)
        (*head)->prev = NULL;

    free(temp);
}

int main() {
    struct Node* head = NULL;

    create(&head, 10);
    create(&head, 20);
    create(&head, 30);

    insert_after_first(head, 15);
    display_reverse(head);

    delete_first(&head);
    printf("\nAfter deleting first node:\n");
    display_reverse(head);

    return 0;
}
