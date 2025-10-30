#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Calculate sum of the series
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;      // Numerator increases by 2
        denominator += 4;    // Denominator increases by 4
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
