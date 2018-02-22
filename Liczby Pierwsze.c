#include <stdio.h>

int main()
{
    int n, i, k, j, p;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &k);
        p=0;
        if(k>=2){
            for(j=2;j<k;j++)
            {
                if(k%j==0){
                p++;
                }
            }
        }
        if(p!=0 && k>=2) puts("NIE");
        else if(p==0 && k>=2) puts("TAK");
        else puts("NIE");
    }

    return 0;
}
