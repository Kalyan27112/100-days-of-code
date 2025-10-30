#include <stdio.h>

int main() {
    int a, b, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Make sure numbers are positive
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Find HCF using Euclidean algorithm
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    hcf = a; // or b (both are same here)

    printf("HCF (GCD) = %d\n", hcf);

    return 0;
}
