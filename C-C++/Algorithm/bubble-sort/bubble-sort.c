// Follow the below steps to solve the problem:

// Run a nested for loop to traverse the input array using two variables i and j, such that 0 ≤ i < n-1 and 0 ≤ j < n-i-1
// If arr[j] is greater than arr[j+1] then swap these adjacent elements, else move on
// Print the sorted array


#include <stdio.h>

// Bubble Sort Algorithm Implement
void bubble_sort( int A[], int n ) {
    int i, j, temp;

    for ( i = 0; i < n; i++ ) 
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if( A[j] > A[j+1] )
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }    
}


// Function to print an array
void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}


// Driver Function
int main() 
{
    int arr[] = {9, 2, 8, 11, 1, 20, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    printf("After Sorted \n");
    
    print_array(arr, n);
}


// Time Complexity: O(N sqr)
// Space Complexity: O(1)