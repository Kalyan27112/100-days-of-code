//Multiply two matrices.
#include <stdio.h>
int main() {
    int m, n, p, q, i, j, k, a[10][10], b[10][10], c[10][10] = {0};
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &p, &q);
    if(n!=p) { printf("Incompatible"); return 0; }
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d", &b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
