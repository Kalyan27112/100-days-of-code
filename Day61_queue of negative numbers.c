#include <stdio.h>

int main() {
    int n, k;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read window size k
    scanf("%d", &k);
    
    // Queue to store indices of negative numbers in current window
    int negIndex[n];
    int front = 0, rear = 0; // queue is empty when front == rear

    // Process first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negIndex[rear++] = i;
        }
    }

    // For each window starting from index 0 to n-k
    for (int i = k; i <= n; i++) {
        // Print result for the previous window
        if (front != rear) {
            // First negative index is at negIndex[front]
            printf("%d ", arr[negIndex[front]]);
        } else {
            // No negative number in this window
            printf("0 ");
        }

        // Slide the window: remove elements going out of the window
        // Window is [i-k+1, i] (when i < n)
        if (i == n) break;  // no more elements to add

        while (front != rear && negIndex[front] <= i - k) {
            front++; // pop from front
        }

        // Add new element (arr[i]) if it is negative
        if (arr[i] < 0) {
            negIndex[rear++] = i;
        }
    }

    return 0;
}
