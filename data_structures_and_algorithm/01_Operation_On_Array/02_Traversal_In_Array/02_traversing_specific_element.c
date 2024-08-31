#include<stdio.h>

// Function for traversing a specifi element in the array
void travers_specific_element (int a [100], int index) {
    printf("\n %d \n", a[index]);
}

int main() {
    // Directily assigning values in the array
    int A[100] = {10,20,30,40,50,60,70,80,90,100}; 
    int size = 10, index;

    printf("\n Enter the index of the element to be traverse : ");
    scanf("%d",&index);

    travers_specific_element (A , index);

    return 0;
}