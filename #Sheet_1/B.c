#include <stdio.h>

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    // Read input
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);

    // Print output
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", c);
    printf("%.2f\n", d);
    printf("%.4f\n", e);

    return 0;
}