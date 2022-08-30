
// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <stdio.h>

// Function Declare
int linear_search(int arr [], int n, int x) {

    int i;

    for ( i = 0; i < n; i++)
    {
        if( arr[i] == x ) {
            return i;
        }
    }

    i = -1;
    return i;        
}


int main() {

    int arr [] = {5, 34, 54, 22, 99, 18, 96};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 99;

    // Function Call
    int result = linear_search( arr, n, x );

    ( result == -1 ) ? printf("Element is not found in this array") : printf("Element is present at index %d", result);

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)