#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle the special case for 0
    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;  // Store remainder
        n = n / 2;
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
