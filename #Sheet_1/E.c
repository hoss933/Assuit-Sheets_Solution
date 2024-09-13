
#include <stdio.h>

int main() {
    double R;
    double pi = 3.141592653;
    
    // Read the input radius
    scanf("%lf", &R);
    
    // Calculate the area
    double area = pi * R * R;
    
    // Print the result with 9 digits after the decimal point
    printf("%.9f\n", area);
    
    return 0;
}
