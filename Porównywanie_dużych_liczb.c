#include <stdio.h>
#include <string.h>
#define N 1000
 
int main()
{
    char znak[2], a[N], b[N];
    int i, x, y, licz;
    while((scanf("%s %s %s", a, znak, b))!=EOF)
    {
        licz=0;
        x=strlen(a);
        y=strlen(b);
        if(znak[0]=='=' && znak[1]=='=')
            if(x>y || x<y) puts("0");
            else
            {
                for(i=0;i<x;i++)
                {
                    if(a[i]==b[i]) licz++;
                } 
                if(licz==x) puts("1");
                else puts("0");
            }
        else if(znak[0]=='!' && znak[1]=='=')
            if(x!=y) puts("1");
            else
            {
                for(i=0;i<x;i++)
                {
                    if(a[i]==b[i]) licz++;
                }
                if(licz==x) puts("0");
                else puts("1");
            }
 
        else if(znak[0]=='<' && znak[1]=='=')
            if(y>x) puts("1");
            else if(x>y) puts("0");
            else
            {
                for(i=0;i<x;i++)
                {
                    if(a[i]<b[i])
                    {
                        licz=1; break;
                    }
                    else if(a[i]>b[i])
                    {
                        licz=2; break;
                    }
                }
                if(licz==1) puts("1");
                else if(licz==2) puts("0");
                else puts("1");
            }
        else if(znak[0]=='>' && znak[1]=='=')
            if(x>y) puts("1");
            else if(y>x) puts("0");
            else
            {
                for(i=0;i<x;i++)
                {
                    if(b[i]<a[i])
                    {
                        licz=1; break;
                    }
                    else if(b[i]>a[i])
                    {
                        licz=2; break;
                    }
                }
                if(licz==1) puts("1");
                else if(licz==2) puts("0");
                else puts("1");
            }
    }
 
    return 0;
}
