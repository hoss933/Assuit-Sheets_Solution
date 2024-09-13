#include <stdio.h>
#include <math.h>

int main() {
    double N;
    // Read the input number as a floating-point number
    scanf("%lf", &N);

    // Determine if the number is an integer or float
    if (floor(N) == N) { // Check if the number is an integer
        printf("int %d\n", (int)N);
    } else {
        // Extract the integer and decimal parts
        int integerPart = (int)N;
        double decimalPart = N - integerPart;
        
        // Print the result as "float" followed by integer and decimal parts
        printf("float %d %.3f\n", integerPart, decimalPart);
    }

    return 0;
}
