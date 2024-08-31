#include<stdio.h>

// Function for deleting the element at the beginning 
void deletion_at_beginning(int arr[],int *size) {
    int i;
    for ( i = 0; i < *size; i++)
    {
        arr[i] = arr[i+1];
    }
    --(*size);
}

// Function for displaying the array
void printarray (int a [100], int s) {
    for ( int i = 0 ; i < s ; ++i) {
        printf ("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    // Directily assigning values in the array
    int Arr[100] = {10,20,30,40,50,60,70,80,90,100}; 
    int size = 10;

    printarray(Arr,size);
    deletion_at_beginning(Arr, &size);
    printarray(Arr,size);

    return 0;
}