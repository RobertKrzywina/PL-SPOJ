#include <stdio.h>

int nwd(int x, int y);

int main()
{
    int t, x, y, i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n",nwd(x,y));
    }

    return 0;
}
int nwd(int x, int y)
{
    while(x!=y){
    if (x>y) x=x-y;
    else y=y-x;
    }
    return x; // obojetnie albo a albo b
}
