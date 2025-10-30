#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    lastDigit = num % 10; // Get last digit

    // Count total digits
    digits = (int)log10(num);

    // Get first digit
    firstDigit = num / pow(10, digits);

    // If number has only one digit
    if (num < 10) {
        printf("After swapping: %d\n", num);
        return 0;
    }

    // Remove first and last digits
    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;

    // Reconstruct number after swapping
    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("After swapping: %d\n", swappedNum);

    return 0;
}
