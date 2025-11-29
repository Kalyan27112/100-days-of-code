
Q103//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based)
of the smallest element in arr[] that is greater than or equal to x and print it. This element is
called the ceil of x. If such an element does not exist,print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
            return i;

        leftSum += arr[i];
    }

    return -1;  // no pivot found
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = findPivotIndex(arr, n);

    printf("%d\n", pivot);

    return 0;
}
