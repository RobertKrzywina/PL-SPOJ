#include <stdio.h>
#define DOBA 86400

int main()
{
    int t, i, x, y, s, wynik, j;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &x, &y);
        wynik=0;
        for(j=0;j<x;j++)
        {
            scanf("%d", &s);
            wynik+=(DOBA/s);
        }
        if(wynik%y!=0){
            wynik/=y; wynik+=1;
            printf("%d\n", wynik);
        }
        else printf("%d\n", wynik/y);
    }

    return 0;
}
