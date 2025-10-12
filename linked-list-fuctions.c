#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

//creating linked list
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

// Function to traverse the linked list
void traverselist(struct Node *head){
    struct Node *temp;
    if(head==NULL){
        printf("list is empty");
    }else{
        temp = head;
        while(temp != NULL){
            printf("Data = %d\n",temp->data);
            temp=temp->next;
        }
    }
}



int main() {
    struct Node *head;
    head =createNode(10);
    traverselist(head);
}