#include<stdio.h>

int main(){
    int A[100],size,i;
    
    // geting the the size of array
    printf("\n Enter the size of array : ");
    scanf("%d", &size);
    
    // for loop for entering the array element 
    printf("\n Enter the array element :- \n");
    for( i = 0 ; i < size ; ++i) {
        scanf("%d", &A[i]);
    }

    // for loop for printing the array element 
    printf("\n Element in the array are :- \n");
    for( i = 0 ; i < size ; ++i) {
        printf("%d ", A[i]);
    }
    
    return 0;
}