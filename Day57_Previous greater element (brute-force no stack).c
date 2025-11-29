Q107
//Write a program to take an array arr[] of integers as input, the task is to find the previous greater
element for each element of the array in order of their appearance in the array. Previous greater element
of an element in the array is the nearest element on the left which is greater than the current element.
If there does not exist next greater of current element, then previous greater element for current element is -1.
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
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            free(arr);
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int pge = -1; // previous greater element default
        // scan left side to find nearest greater
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }
        if (i > 0) printf(", ");
        printf("%d", pge);
    }
    printf("\n");

    free(arr);
    return 0;
}
