// n series add with for loop

#include <stdio.h>

int main() {
    int i, n, result = 0;

    scanf("%d", &n);

    for( i=1; i<=n; i++ ) {
        result = result + i;
    }

    printf("result = %d", result);

    return 0;
}

// Time Complexity O(n)
// Space Complexity O(1)