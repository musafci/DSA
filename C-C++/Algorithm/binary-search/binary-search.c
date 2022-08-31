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