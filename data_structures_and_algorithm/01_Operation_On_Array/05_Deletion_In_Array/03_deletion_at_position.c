#include<stdio.h>

// Function for deleting the element at the given index 
void deletion_at_position(int arr[],int *size ,int index ) {
    int i;
    for ( i = index ; i < *size -1 ; i++)
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
    int size = 10, element, index;

    printarray(Arr,size);
    printf("\n Enter the index of the element to be delete : ");
    scanf("%d",&index);
    deletion_at_position(Arr, &size, index);
    printarray(Arr,size);

    return 0;
}