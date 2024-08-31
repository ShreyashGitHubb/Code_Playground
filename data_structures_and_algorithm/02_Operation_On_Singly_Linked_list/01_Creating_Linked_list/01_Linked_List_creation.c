#include <stdio.h>
#include<stdlib.h>

// Structure of Node
struct Node {
    int data;
    struct Node * next;
};

// Function for printing the linked list
void Print_List (struct Node * ptr) {
    while (ptr != NULL){
        printf("\nElement : %d ", ptr->data);
        ptr = ptr->next;
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

    // printing the linked list
    Print_List(head);

    return 0;
}