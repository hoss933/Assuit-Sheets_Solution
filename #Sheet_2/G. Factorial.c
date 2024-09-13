#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N; // Number for which we need to find the factorial
        scanf("%d", &N);

        // Calculate factorial
        unsigned long long result = 1;
        for (int j = 1; j <= N; j++)
        {
            result *= j;
        }

        // Print the result
        printf("%llu\n", result);
    }

    return 0;
}
