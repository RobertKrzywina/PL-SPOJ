#include <stdio.h>
#define N 100

int main()
{
    int i=0, n, tab[N]={};
    while((scanf("%d", &n))!=EOF){
        tab[i]=n;
        i++;
    }
    for(i;i>0;i--)
        printf("%d ", tab[i-1]);

    return 0;
}
