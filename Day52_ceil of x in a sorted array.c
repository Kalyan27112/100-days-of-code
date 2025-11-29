Q102 
//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based)
of the smallest element in arr[] that is greater than or equal to x and print it.This element is
called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple
occurrences of ceil of x, return the index of the first occurrence.     
#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible answer
            high = mid - 1;    // search for earlier occurrence
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = ceilIndex(arr, n, x);

    printf("%d\n", index);  // prints the index or -1

    return 0;
}
