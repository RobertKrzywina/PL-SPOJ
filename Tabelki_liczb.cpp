#include <iostream>
#include <stdio.h>
#define N 100

using namespace std;

int main()
{
    int t, c, w, tab[N][N]; // c - kolumny, w - wiersze
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d", &c, &w);
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<w;k++)
            {
                scanf("%d", &tab[j][k]);
            }
        }
        
        // Pierwsza linia
        for(int k=1;k<w;k++)
            {
                printf("%d ", tab[0][k]);
            }
        printf("%d\n", tab[1][w-1]);

        for(int j=1;j<c;j++)
        {
            // Srodek
            if(j!=c-1){
                printf("%d ", tab[j-1][0]);
                for(int k=1;k<w-1;k++)
                {
                    printf("%d ", tab[j][k]);
                }
                printf("%d\n", tab[j+1][w-1]);
            }
            // Ostatnia linia
            else{
                printf("%d ", tab[c-2][0]);
                for(int k=0;k<w-1;k++)
                {
                    printf("%d ", tab[c-1][k]);
                }
                putchar('\n');
            }
        }
    }

    return 0;
}
