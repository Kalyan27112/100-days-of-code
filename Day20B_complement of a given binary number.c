#include <stdio.h>
#include <string.h>

int main() {
    char binary[50];
    int i;

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Validate and find 1’s complement
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    // Display result
    printf("1's Complement: %s\n", binary);

    return 0;
}
