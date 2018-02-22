#include <stdio.h>
#include <stdlib.h>
#define N 100
#define M 100

int main()
{
    int t, i, j, n[N], tab[N][M]={}, x[N];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n[i]);
        for(j=0;j<n[i];j++)
            scanf("%d", &tab[i][j]);
        x[i]=tab[i][0];
    }
    for(i=0;i<t;i++)
    {
        printf("\n");
        for(j=1;j<n[i];j++)
            printf("%d ", tab[i][j]);
        printf("%d", x[i]);
    }
    return 0;
}
