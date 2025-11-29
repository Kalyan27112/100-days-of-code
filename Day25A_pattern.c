Q49 (Nested Loops without Arrays/Strings)
//Write a program to print the following pattern:
5
45
345
2345
12345
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls the number of rows
    for (i = 5; i >= 1; i--) {
        // Inner loop prints numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
