//Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int i, j, rows, cols, mat[10][10], sum = 0;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum += mat[i][j];
    
    printf("Sum of all elements = %d\n", sum);
    
    return 0;
}
