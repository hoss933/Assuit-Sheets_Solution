#include <stdio.h>
#include <stdlib.h> // For llabs()

int main()
{
    int N;
    long long Sum = 0; // Use long long to handle large sums

    // Read the number of elements
    scanf("%d", &N);

    // Define an array to store the integers
    int A[N];

    // Read the integers into the array and calculate the sum
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        Sum += A[i];
    }

    // Print the absolute value of the sum
    printf("%lld\n", llabs(Sum)); // llabs() computes the absolute value of a long long integer

    return 0;
}
