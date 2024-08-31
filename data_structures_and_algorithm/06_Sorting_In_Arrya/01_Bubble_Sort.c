#include <stdio.h>

// Function for bubble sort
void bubble_sort(int arr[], int size){
    int i,j,temp;
    for(i = 0 ; i < size-1 ; ++i){
        for(j = 0 ; j < size-i-1 ; ++j){
            if (arr[j] > arr[j+1]){
                // then swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    // printing the array before bubble sort  
    printarray(Arr,size);

    //preforming the bubble short
    bubble_sort(Arr,size);    

    // printing the array after bubble sort  
    printarray(Arr,size);

    return 0;
}