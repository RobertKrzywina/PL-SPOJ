#include <stdio.h>
#define M 200
#define N 200

int main()
{
    int m, n, tab[M][N]={}, i, j;
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d", &tab[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d ", tab[j][i]);
    putchar('\n');
    }

    return 0;
}
