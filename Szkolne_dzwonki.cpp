#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int h, m, tab[600], i=0, x, y;
    char ch;

    scanf("%d%c%d", &h, &ch, &m);

    while((scanf("%d", &tab[i]))!=EOF){
        if(tab[i]>0 && tab[i]<=10080)
        i++;
    }

    h*=60;

    for(int j=0;j<=i;j++)
    {
        x=h/60; y=h%60;

        if(x<10) printf("0%d:", x);
        else printf("%d:", x);

        if(y<10) printf("0%d,", y);
        else printf("%d,", y);

        h+=45; x=h/60; y=h%60; // + 45

        if(x<10) printf("0%d:", x);
        else printf("%d:", x);

        if(y<10) printf("0%d", y);
        else printf("%d", y);

        h+=tab[j]; // + przerwa

        if(j!=i) printf(",");
    }

    return 0;
}
