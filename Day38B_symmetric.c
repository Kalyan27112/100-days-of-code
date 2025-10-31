//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int i, j, n, mat[10][10], flag = 1;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(mat[i][j] != mat[j][i]) {
                flag = 0;
                break;
            }
    
    if(flag)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");
    
    return 0;
}
