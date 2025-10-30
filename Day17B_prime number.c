#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Assume number is prime initially

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for numbers less than 2
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; // Not a prime
            break;
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
