#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    
    // Calculate the sum using the formula N * (N + 1) / 2
    long long sum = N * (N + 1) / 2;
    
    // Print the result
    printf("%lld\n", sum);
    
    return 0;
}
