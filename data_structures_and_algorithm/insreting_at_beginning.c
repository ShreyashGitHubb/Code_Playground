#include<stdio.h>

// Function for inserting the element at the beginning 
void Insert_At_Beginning(int arr[],int *size, int element) {
    int i;
    for( i = *size ; i > 0 ; --i) {
        arr[i] = arr[i-1];
    }
    arr[0] = element;
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
    int size = 10,element;
    
    printarray(Arr,size);
    printf ("\n Enter the element to be insreted at the beginning of the array : ");
    scanf ("%d", &element);

    Insert_At_Beginning(Arr,&size,element);
    printarray(Arr,size);

    return 0;
}