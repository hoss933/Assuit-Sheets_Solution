#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);

    unsigned int A[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int max_operations = 0;  // This will store the number of operations
    
    // Continue dividing as long as all numbers are even
    while (1) {
        // Check if all numbers are even
        for (i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                // If any number is odd, we can't perform more operations
                printf("%d\n", max_operations);
                return 0;
            }
        }

        // If all numbers are even, perform the division by 2
        for (i = 0; i < N; i++) {
            A[i] /= 2;
        }

        // Increment the operation counter
        max_operations++;
    }

    return 0;
}
