#include <stdio.h>
#include<stdlib.h>

// Structure of Node
struct Node {
    int data;
    struct Node * next;
};

// Function for deletion the element at givem index
struct Node * Delection_At_Index (struct Node * head, int index){
    struct Node * p = head; 
    struct Node * q = head->next; 
    for (int i = 0; i < index-1 ; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
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

    // traversal the linked list befort the delection 
    Traversal_List(head);

    head = Delection_At_Index(head,1);

    // traversal the linked list after the delection 
    Traversal_List(head);
    
    // freeing the allocated memory
    freeList(head);

    return 0;
}