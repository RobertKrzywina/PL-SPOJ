#include <stdio.h>
#define N 100

int main()
{
    int t, n[N]={}, i, j, tab[N][N]={};
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n[i]);
        for(j=0;j<n[i];j++)
            scanf("%d", &tab[i][j]);
    }
    for(i=0;i<t;i++)
    {
        printf("\n");
        for(j=n[i];j>0;j--)
            printf("%d ", tab[i][j-1]);
    }
    return 0;
}
