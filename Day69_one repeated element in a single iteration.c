#include <stdio.h>
#include <stdlib.h>   // for abs()

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]);

        // If the value at this index is already negative,
        // we have visited this value before → it's repeated.
        if (arr[index] < 0) {
            printf("%d", index);
            return 0;
        }

        // Mark this index as visited by making the value negative.
        arr[index] = -arr[index];
    }

    // Just in case (should never happen with valid input)
    printf("No repetition found");
    return 0;
}
