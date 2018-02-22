#include <stdio.h>
#define N 2

int main()
{
    int t, i;
    unsigned long int n, m, x;
    char ch[N];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        x=0; m=0;
        scanf("%s %lu", ch, &n);
        n%=7;
        if(ch[0]=='P' && ch[1]=='n')      m=1;
        else if(ch[0]=='W' && ch[1]=='t') m=2;
        else if(ch[0]=='S' && ch[1]=='r') m=3;
        else if(ch[0]=='C' && ch[1]=='z') m=4;
        else if(ch[0]=='P' && ch[1]=='t') m=5;
        else if(ch[0]=='S' && ch[1]=='o') m=6;
        else if(ch[0]=='N' && ch[1]=='d') m=7;
        
        x=m+n; x%=7;
        
        if(x==1)      puts("Pn");
        else if(x==2) puts("Wt");
        else if(x==3) puts("Sr");
        else if(x==4) puts("Cz");
        else if(x==5) puts("Pt");
        else if(x==6) puts("So");
        else if(x==0) puts("Nd");
    }

    return 0;
}
