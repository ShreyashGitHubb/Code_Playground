#include<stdio.h>

// Function for inserting the element at the beginning 
void Insert_At_Position(int arr[],int *size, int element,int pos) {
    int i;
    for( i = *size ; i >= pos ; --i) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = element;
    ++(*size);
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
    int size = 10, element, position;
    
    printarray(Arr,size);
    printf ("\n Enter the element to be insreted in the array : ");
    scanf ("%d", &element);
    printf ("\n Enter the position of the element : ");
    scanf ("%d", &position);

    Insert_At_Position(Arr, &size, element, position);
    printarray(Arr,size);

    return 0;
}