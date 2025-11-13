#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    long long *arr = malloc(n * sizeof(long long));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &arr[i]) != 1) {
            printf("Invalid input\n");
            free(arr);
            return 1;
        }
    }

    int k;
    printf("Enter k: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid k\n");
        free(arr);
        return 1;
    }

    if (k <= 0 || k > n) {
        // No valid subarray of size k
        printf("-1\n");
        free(arr);
        return 0;
    }

    // initialize first window
    long long window_sum = 0;
    for (int i = 0; i < k; i++)
        window_sum += arr[i];

    long long max_sum = window_sum;

    // slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i];
        window_sum -= arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("%lld\n", max_sum);

    free(arr);
    return 0;
}
