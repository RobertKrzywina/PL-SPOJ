#include <stdio.h>

int main()
{
    int t, n, x, y, i, j;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d", &n, &x, &y);
        for(j=1;j<n;j++)
        {
            if(j%x==0 && j%y!=0) printf("%d ", j);
            else continue;
        }
        putchar('\n');
    }

    return 0;
}
