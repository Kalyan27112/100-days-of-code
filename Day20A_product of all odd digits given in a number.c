#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0; // To check if there are any odd digits

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Extract digits and find product of odd ones
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
