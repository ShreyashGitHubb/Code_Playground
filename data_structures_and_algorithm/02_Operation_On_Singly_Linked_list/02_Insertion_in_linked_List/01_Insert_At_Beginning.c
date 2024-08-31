#include <stdio.h>
#include<stdlib.h>

// Structure of Node
struct Node {
    int data;
    struct Node * next;
};


// Function for inserting at the beginning of the linked list
struct Node * insert_at_beginning(struct Node * head, int data) {
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->next = head ;
    ptr->data = data ;
    return ptr;    
}


// Function for traversal the linked list
void Traversal_List (struct Node * ptr) {
    while (ptr != NULL){
        printf(" %d ->", ptr->data);
        ptr = ptr->next;
    }
    printf(" NULL\n");
}

// Function to free the memory allocated for the list
void freeList(struct Node * head) {
    struct Node * temp;
    while (head != NULL) {
        temp = head;       // Store the current node
        head = head->next; // Move to the next node
        free(temp);        // Free the current node's memory
    }
}

int main(){
    // declaring the Node of the list
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // dynamically allocating memory for the nodes 
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));

    // Assigning values to the node and linked with the next node
    head -> data = 10;
    head -> next = second;

    // Assigning values to the node and linked with the next node
    second -> data = 20;
    second -> next = third;

    // Assigning values to the last node and linked with the NULL node
    third -> data = 30;
    third -> next = NULL;

    printf("\n linked list before insertion at the beginning\n");
    Traversal_List(head);

    head = insert_at_beginning(head , 40);
    
    printf("\n linked list after insertion at the beginning\n");
    Traversal_List(head);

    // freeing the allocated memory
    freeList(head);

    return 0;
}