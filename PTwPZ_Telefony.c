#include <stdio.h>
#include <string.h>
#define N 20

int main()
{
    int t, i, x, j;
    char ch[N];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", ch);
        x=strlen(ch);
        if(x>=4)
        {
            for(j=0;j<x;j++)
            {
                if(ch[j]=='A' || ch[j]=='B' || ch[j]=='C')
                    printf("2");
                else if(ch[j]=='D' || ch[j]=='E' || ch[j]=='F')
                    printf("3");
                else if(ch[j]=='G' || ch[j]=='H' || ch[j]=='I')
                    printf("4");
                else if(ch[j]=='J' || ch[j]=='K' || ch[j]=='L')
                    printf("5");
                else if(ch[j]=='M' || ch[j]=='N' || ch[j]=='O')
                    printf("6");
                else if(ch[j]=='P' || ch[j]=='Q' || ch[j]=='R' || ch[j]=='S')
                    printf("7");
                else if(ch[j]=='T' || ch[j]=='U' || ch[j]=='V')
                    printf("8");
                else if(ch[j]=='W' || ch[j]=='X' || ch[j]=='Y' || ch[j]=='Z')
                    printf("9");
            }
        }
        putchar('\n');
    }

    return 0;
}
