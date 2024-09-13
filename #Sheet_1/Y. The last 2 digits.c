#include <stdio.h>

int main() {
    unsigned long long A, B, C, D;
    scanf("%llu %llu %llu %llu", &A, &B, &C, &D);

    // Calculate the product and keep only the last two digits
    unsigned long long product = (A % 100) * (B % 100) % 100;
    product = product * (C % 100) % 100;
    product = product * (D % 100) % 100;

    // Print the last two digits
    printf("%02llu\n", product);

    return 0;
}
