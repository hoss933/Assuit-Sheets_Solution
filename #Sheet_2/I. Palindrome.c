 #include <stdio.h>
#include <string.h>

int main() {
    char str[20], reversed[20];
    int N, length, j = 0, palindrome = 1;

    // Input the number
    //printf("Enter the number: ");
    scanf("%d", &N);

    // Convert number to string
    sprintf(str, "%d", N);
    
    // Find the length of the string
    length = strlen(str);
    
    // Reverse the string and store in 'reversed' without leading zeros
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] != '0' || j > 0) {
            reversed[j++] = str[i];
        }
    }
    reversed[j] = '\0';  // Null-terminate the reversed string

    // Output the reversed string
    printf("%s\n", reversed);

    // Check if the original number is a palindrome
    for (int i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    // Output whether the number is a palindrome
    if (palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
