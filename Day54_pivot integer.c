Q104
//Write a Program to take a positive integer n as input, and find the pivot integer x such that the
sum of all elements between 1 and x inclusively equals the sum of all elements between x and n 
inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is
guaranteed that there will be at most one pivot integer for the given input.
    
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    // We want x such that:
    // sum(1..x) = total - sum(1..x) + x
    // 2*sum(1..x) = total + x
    // sum(1..x) = x*(x+1)/2

    for (int x = 1; x <= n; x++) {
        long long leftSum = (long long)x * (x + 1) / 2;
        long long rightSum = total - leftSum + x;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
