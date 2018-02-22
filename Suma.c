#include <stdio.h>
#define R 100

int main()
{
    int n, tab[R]={}, suma=0, i=0, licz=0;
    while((scanf("%d", &n)==1))
    {
            suma+=n;
            tab[i]=suma;
            licz++;
            i++;
    }
    for(i=0;i<licz;i++)
        printf("%d\n", tab[i]);
    return 0;
}
