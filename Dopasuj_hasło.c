#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 20
#define M 40
 
int main()
{
    int t, i, x, j, k, z, y;
    char ch1[N], ch2[M];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s %s", ch1, ch2);
        x=strlen(ch1);
        y=strlen(ch2);
        if(x>=3 && y>=1){
            z=0;
            for(j=0;j<x;j++)
            {
                if((isdigit(ch1[j])) || (isalpha(ch1[j])))
                z++;
            }
        }
        if(z==x){
        k=0;
        for(j=0;j<x;j++)
        {
            if(ch1[j]==ch2[j] || ch2[j]=='*'){
                k++;
                continue;
            }
            else break;
        }
        if(k==x && x==y) puts("ok");
        else puts("error");
        }
    }
 
    return 0;
}
 
