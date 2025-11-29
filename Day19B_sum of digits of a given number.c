Q38 (Loops without Arrays/Strings)
//Write a program to find the sum of digits of a number.#include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
