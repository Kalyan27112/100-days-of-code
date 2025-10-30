#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Calculate the series sum
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
