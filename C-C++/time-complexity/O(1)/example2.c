// n series add

#include <stdio.h>

int main() {

    int n, result;

    scanf("%d", &n);

    result = n * (n + 1) / 2;

    printf("Result = %d\n", result);

    return 0;
}

// Time Complexity O(1)
// Space Complexity O(1)