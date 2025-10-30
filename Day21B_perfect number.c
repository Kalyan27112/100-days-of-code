#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Perfect number must be positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Find sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    // Check if number is perfect
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
