//Find the transpose of a matrix.#include <stdio.h>
int main() {
    int i, j, rows, cols, mat[10][10], trans[10][10];
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            trans[j][i] = mat[i][j];
    
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    
    return 0;
}
