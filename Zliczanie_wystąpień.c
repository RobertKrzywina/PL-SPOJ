#include <stdio.h>

int main()
{
    int a, b, x, i, licz=0;
    while((scanf(" %d %d ", &a, &b))!=EOF)
    {
        for(i=0;i<b;i++){
            scanf("%d", &x);
            if(x==a) licz++;
        }
        printf("%d\n", licz);
        licz=0;
    }

    return 0;
}
