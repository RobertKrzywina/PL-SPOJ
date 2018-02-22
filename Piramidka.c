#include <stdio.h>
#include <string.h>
#define SIZE 20

int main()
{
    int n, i, j, k, x=2, z, a;
    char napis[SIZE];
    scanf("%d", &n);
    if(n%2!=0)
    {
        scanf("%s", napis);
        z=n/x;
        a=strlen(napis);
        for(i=1;i<=a;i+=2)
        {
            if(i==n){
                puts(napis); exit(0);
            }
            else
            for(j=0;j<z;j++)
                putchar('.');
                for(k=z;k<z+i;k++)
                    putchar(napis[k]);
                    for(j=0;j<z;j++)
                        putchar('.');
            putchar('\n');
            x++; z--;
        }
    }

    return 0;
}
