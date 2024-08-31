#include <stdio.h>
#include <stdlib.h>

// Function to merge two subarrays of arr[].
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free the allocated memory for temporary arrays
    free(L);
    free(R);
}

// Function for Merge sort
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
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

    // Printing the array before merge sort
    printf("Array before merge sort:\n");
    printarray(Arr, size);

    // Performing the merge sort
    merge_sort(Arr, 0, size - 1);

    // Printing the array after merge sort
    printf("Array after merge sort:\n");
    printarray(Arr, size);

    return 0;
}
