//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, i, pos, arr[100], key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    printf("Enter position (1 to %d) to insert: ", n+1);
    scanf("%d", &pos);
    
    for(i = n; i >= pos; i--)
        arr[i] = arr[i-1];
    
    arr[pos-1] = key;
    n++;
    
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
