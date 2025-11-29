Q113 (Logic Enhancers)
//Write a program to take an integer array arr and an integer k as inputs. The task is to find the
kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;

    // Read array size
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read k
    scanf("%d", &k);

    // Sort array
    qsort(arr, n, sizeof(int), compare);

    // Print k-th smallest element (1-based)
    printf("%d", arr[k - 1]);

    return 0;
}
