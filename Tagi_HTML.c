#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 50

int main()
{
    char ch[SIZE];
    int i, n;
    while((scanf("%s", ch))!=EOF)
    {
        for(i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='<'){
                n=1;
                putchar(ch[i]);
            }
            else if(ch[i]=='>'){
                putchar(ch[i]);
                n=0;
            }
            else if(n==1) putchar(toupper(ch[i]));
            else putchar(ch[i]);
        }
        putchar('\n');
    }

    return 0;
}
