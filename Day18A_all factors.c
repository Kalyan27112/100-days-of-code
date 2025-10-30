#include <stdio.h>

int main() {
    int num, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for valid input
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);

    // Loop through numbers to find factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
