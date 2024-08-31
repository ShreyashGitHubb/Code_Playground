#include <stdio.h>

// Function to swap elements in an array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array into two parts
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = (low - 1); // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // Increment index of the smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    // Swap the pivot element with the element at index (i + 1)
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to perform Quick Sort
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// Function for displaying the array
void printarray(int a[], int s) {
    for (int i = 0; i < s; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int Arr[100] = {90, 20, 60, 40, 10, 30, 70, 50, 100, 80}; // Initializing the array
    int size = 10;

    // Printing the array before quick sort
    printf("Array before quick sort:\n");
    printarray(Arr, size);

    // Performing the quick sort
    quick_sort(Arr, 0, size - 1);

    // Printing the array after quick sort
    printf("Array after quick sort:\n");
    printarray(Arr, size);

    return 0;
}
