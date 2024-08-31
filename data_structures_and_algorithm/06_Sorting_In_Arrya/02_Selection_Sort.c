#include <stdio.h>

// Function for selection sort
void selection_sort(int arr[], int size) {
    int i,j,temp,min_index;
    for (i = 0; i < size-1; i++) {
        min_index = i;
        for (j = i+1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        //swaping a[i] and a[min_index]
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
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

    // printing the array before selection sort  
    printf("Array before selection sort:\n"); 
    printarray(Arr,size);

    //preforming the selection short
    selection_sort(Arr,size);    

    // printing the array after selection sort  
    printf("Array after selection sort:\n"); 
    printarray(Arr,size);

    return 0;
}