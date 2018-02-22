#include <stdio.h>
#include <math.h>
#define N 100

int main()
{
    int t, i, liczba[N]={}, ile, j, suma, najblizsza, wartosc[N], x;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        suma=0;
        scanf("%d", &ile);
        for(j=0;j<ile;j++)
        {
            scanf("%d", &liczba[j]);
            suma+=liczba[j];
        }
        najblizsza=liczba[0];
        wartosc[0]=abs(suma-(ile*liczba[0]));
        x=wartosc[0];
        for(j=1;j<ile;j++)
        {
            wartosc[j]=abs(suma-(ile*liczba[j]));
            if(x<=wartosc[j]) continue;
            else{
                najblizsza=liczba[j];
                x=wartosc[j];
            }
        }
        printf("%d\n", najblizsza);
    }

    return 0;
}
