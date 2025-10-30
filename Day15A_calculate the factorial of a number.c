#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long for large results

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // Calculate factorial using a loop
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
