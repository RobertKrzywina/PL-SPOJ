#include <stdio.h>

int main()
{
    int t, i, a, b;
    int tab[10][4]={{0, 0, 0, 0},
                    {1, 1, 1, 1},
                    {6, 2, 4, 8},
                    {1, 3, 9, 7},
                    {6, 4, 6, 4},
                    {5, 5, 5, 5},
                    {6, 6, 6, 6},
                    {1, 7, 9, 3},
                    {6, 8, 4, 2},
                    {1, 9, 1, 9},
                    };
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", tab[a%10][b%4]);
    }
    return 0;
}
