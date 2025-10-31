//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int m, n, i, j, a[10][10];
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    for(i=0;i<m+n-1;i++){
        int start = i<n?0:i-n+1;
        int end = i<m? i : m-1;
        for(j=end;j>=start;j--)
            printf("%d ", a[j][i-j]);
    }
    return 0;
}
