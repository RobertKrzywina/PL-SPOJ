#include <stdio.h>
#define N 100
#define M 100

int main()
{
    int t, i, j, n[N]={}, k[N][M]={}, parz[N][M]={}, niep[N][M]={};
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n[i]);
        for(j=1;j<=n[i];j++)
        {
            scanf("%d", &k[i][j]);
            if(j%2==0) parz[i][j-1]=k[i][j];
            else niep[i][j-1]=k[i][j];
        }
    }
    i=0;
    while(i<t){
    for(j=0;j<n[i];j++){
        if(parz[i][j]==0) continue;
        else printf("%d ", parz[i][j]);}
    for(j=0;j<n[i];j++){
        if(niep[i][j]==0) continue;
        else printf("%d ", niep[i][j]);}
    putchar('\n');
    i++;
    }
    return 0;
}
