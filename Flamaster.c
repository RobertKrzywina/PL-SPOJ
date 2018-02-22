#include <stdio.h>
#include <string.h>
#define SIZE 200

int main()
{
    int i, j, t, x, licz;
    char ch[SIZE];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", ch);
        x=strlen(ch);
        if(x==1) putchar(ch[0]);
        else{
            licz=0;
            for(j=0;j<x;j++)
            {
                if(ch[j]!=ch[j-1] && licz==0){
                    putchar(ch[j]);
                }
                else if(ch[j]==ch[j-1]){
                    if(j==x-1 && licz<2) putchar(ch[j]);
                    else{
                        licz++;
                        if(licz==1) licz++;
                    }
                }
                else if(ch[j]!=ch[j-1] && licz==2){
                    putchar(ch[j-1]);
                    putchar(ch[j]);
                    licz=0;
                }
                else if(ch[j]!=ch[j-1] && licz>2){
                    printf("%d", licz);
                    putchar(ch[j]);
                    licz=0;
                }
            }
            if (licz>1) printf("%d", licz);
        }
        putchar('\n');
    }

    return 0;
}
