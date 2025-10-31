//Delete an element from an array.
#include <stdio.h>
int main() {
    int n, i, pos, arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter position (1 to %d) to delete: ", n);
    scanf("%d", &pos);
    
    for(i = pos-1; i < n-1; i++)
        arr[i] = arr[i+1];
    
    n--;
    
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
