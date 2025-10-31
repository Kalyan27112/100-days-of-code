//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int n, i, j, a[10][10], f = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i][i]==a[j][j])
                f=1;
    if(f==0) printf("Distinct");
    else printf("Not Distinct");
    return 0;
}
