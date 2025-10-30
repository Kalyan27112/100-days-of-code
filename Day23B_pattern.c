#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for (i = 1; i <= 5; i++) {
        // Loop for 5 columns
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
