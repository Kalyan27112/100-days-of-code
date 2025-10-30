#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // Number of rows

    // Outer loop for rows
    for (i = 1; i <= n; i++) {

        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = i; j <= n; j++) {
            printf("*");
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
