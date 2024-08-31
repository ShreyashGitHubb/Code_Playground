#include <stdio.h>

// Function for insertion sort
void insertion_sort(int arr[], int size) {
    int i,j,temp;  
    for (i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Function for displaying the array
void printarray (int a [100], int s) {
    for ( int i = 0 ; i < s ; ++i) {
        printf ("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int Arr[100] = {90,20,60,40,10,30,70,50,100,80}; //initilizing the array element
    int size = 10; 

    // printing the array before insertion sort  
    printf("Array before insertion sort:\n");
    printarray(Arr,size);

    //preforming the insertion short
    insertion_sort(Arr,size);    

    // printing the array after insertion sort  
    printf("Array after insertion sort:\n");
    printarray(Arr,size);

    return 0;
}