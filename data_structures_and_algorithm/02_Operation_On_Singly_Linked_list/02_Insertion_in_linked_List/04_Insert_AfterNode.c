#include <stdio.h>
#include<stdlib.h>

//structure of the node
struct Node {
    int data;
    struct Node* next;
};

// Function for inserting the element at the end of the linked list
struct Node * Insert_AfterNode(struct Node* head,struct Node * prevNode, int data){
    struct Node * ptr = (struct Node*) malloc (sizeof(struct Node));
    ptr ->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
} 

// Function for printing the element in the linked list 
void print_list(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

// Fundtion for freeing the allocated memory of the list
void free_list(struct Node * ptr){
    struct Node* temp;
    while (ptr != NULL)
    {
        temp = ptr;
        ptr = ptr ->next;
        free(temp);
    }
}

int main(){
    // declaring the Nodes of the linked list 
    struct Node* head;
    struct Node* second;
    struct Node* third;
    
    // allocating memory for the nodes
    head = (struct Node*) malloc (sizeof(struct Node));
    second = (struct Node*) malloc (sizeof(struct Node));
    third = (struct Node*) malloc (sizeof(struct Node));

    // assigning values to the nodes and linked with the next node
    head ->data = 10;
    head ->next = second;
   
    second ->data = 20;
    second ->next = third;
   
    third ->data = 30;
    third ->next = NULL;

    // printing the list before the insertion after the previus node of the linked list
    printf("\n list before the insertion after node of the linked list ");
    print_list(head);

    head = Insert_AfterNode(head, second, 25);

    // printing the list after the insertion after the previus node of the linked list
    printf("\n list after the insertion after node the end of the linked list ");
    print_list(head);

    // deallocating the allocating memory of the linkes list
    free_list(head);
    return 0;
}