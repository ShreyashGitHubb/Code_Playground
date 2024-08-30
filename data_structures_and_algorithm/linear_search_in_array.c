#include<stdio.h>

// Function for linear search 
void LinearSearch (int a[], int s, int key) {
    int i;
    for ( i = 0 ; i < s ; ++i) {
        if ( a[i]==key ) {
            printf("\n %d Element is present at %d index ",key ,i);
            break;
        }
    }
    if ( i == s ) {
        printf ("\n Element is not present in the array ");
    }
}

int main () {
     // Directily assigning values in the array
    int Arr[100] = {10,20,30,40,50,60,70,80,90,100}; 
    int size = 10 , element;

    printf ("\n Enter the element to be search in the array : ");
    scanf ("%d", &element);

    LinearSearch(Arr,size,element);

    return 0;
}