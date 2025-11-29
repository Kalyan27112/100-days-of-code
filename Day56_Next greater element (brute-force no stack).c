Q106
//Write a program to take an array arr[] of integers as input, the task is to find the next greater
element for each element of the array in order of their appearance in the array. Next greater element
of an element in the array is the nearest element on the right which is greater than the current
element. If there does not exist next greater of current element, then next greater element for
current element is -1.
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute next greater elements using brute force (no stack)
    for (int i = 0; i < n; i++) {
        int nge = -1; // default if none found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break; // nearest greater to the right
            }
        }
        // print in comma separated fashion
        if (i > 0) printf(", ");
        printf("%d", nge);
    }
    printf("\n");

    free(arr);
    return 0;
}
