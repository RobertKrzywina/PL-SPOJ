#include <stdio.h>

int main()
{
    int t, i, c, k, w, j;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d %d %d", &c, &k, &w);
        if(c*w<=k) puts("yes");
        else puts("no");
    }

    return 0;
}
