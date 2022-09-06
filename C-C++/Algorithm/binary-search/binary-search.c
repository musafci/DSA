// Step-by-step Binary Search Algorithm: We basically ignore half of the elements just after one comparison.

// Compare x with the middle element.
// If x matches with the middle element, we return the mid index.
// Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. 
// So we recur for the right half.
// Else (x is smaller) recur for the left half.


// Iteration Method

#include <stdio.h>

int binary_search( int arr[], int n, int x ) {

    int left, right, mid;

    left = 0;
    right = n - 1;

    while ( left <= right )
    {
        mid = ( left + right ) / 2;
        
        if( arr[mid] == x ) {
            return mid;
        }

        if( arr[mid] < x ) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}


int main() {

    int arr[] = {2, 4, 7, 9, 13, 17, 20, 22, 30, 34, 39, 44, 49, 55, 58, 60, 62, 80, 92, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int result = binary_search(arr, n, x);

    ( result == -1 ) ? printf("Element is not found in this array") : printf("Element is present at index %d", result);
    
    return 0;
}

// Time Complexity: O(log n)
// Space Complexity: O(log n)