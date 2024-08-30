#include<stdio.h>

// Function for displaying the array
void printarray (int a [100], int s) {
    for ( int i = 0 ; i < s ; ++i) {
        printf ("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    // Directily assigning values in the array
    int A[100] = {10,20,30,40,50,60,70,80,90,100}; 
    int size = 10;

    printarray (A , size);

    return 0;
}