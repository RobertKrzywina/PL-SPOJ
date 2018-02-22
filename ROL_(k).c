#include <stdio.h>
#define N 100

int main()
{
    int n, k, i, j, tab[N]={};
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++)
        scanf("%d", &tab[i]);
    if(n==k){
        for(i=0;i<n;i++)
        printf("%d ", tab[i]);
    }
    else{
    for(i=k;i<n;i++)
       printf("%d ", tab[i]);
    for(i=0;i<k;i++)
        printf("%d ", tab[i]);
    }
    return 0;
}
