#include <stdio.h>

int main()
{
    int t, i, j, x, z=0, licz;
    char tekst[200], tab[200];
    scanf("%d", &t);
    getchar();
    for(i=0;i<t;i++)
    {
        fgets(tekst, 200, stdin);
        x=strlen(tekst);
        for(j=0;j<x;j++)
        {
            tab[z]=tekst[j]; z++;
        }
    }

    for(i=97;i<123;i++)
    {
        licz=0;
        for(j=0;j<z;j++)
        {
            if(i==tab[j]) licz++;
        }
        if(licz>0) printf("%c %d\n", i, licz);
    }

    for(i=65;i<91;i++)
    {
        licz=0;
        for(j=0;j<z;j++)
        {
            if(i==tab[j]) licz++;
        }
        if(licz>0) printf("%c %d\n", i, licz);
    }

    return 0;
}
