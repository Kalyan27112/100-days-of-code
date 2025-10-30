#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // Store the original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    // Check if the number is palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
