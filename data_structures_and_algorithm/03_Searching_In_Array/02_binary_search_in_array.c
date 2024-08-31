#include<stdio.h>

// Function for binary search 
void binarySearch (int a[], int s, int key) {
    int low, high, mid;
    low = 0;
    high = s-1;
    while (low <= high ){
        mid = (low + high)/2;
        
        if (a[mid] == key){
            printf("\n %d Element is present at %d index ",key ,mid);
            return;
        }
        else if (a[mid] < key ) {
            low =  mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    // if the wile loop dosent return it means the element is not find in the array
    printf("\n Element is not present in the array \n");
}

int main () {
     // Directily assigning values in the array
    int Arr[100] = {10,20,30,40,50,60,70,80,90,100}; 
    int size = 10 , element;

    printf ("\n Enter the element to be search in the array : ");
    scanf ("%d", &element);

    binarySearch(Arr,size,element);

    return 0;
}