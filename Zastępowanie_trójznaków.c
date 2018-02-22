#include <stdio.h>
#include <string.h>
#define N 200

int main()
{
    char ch[N];
    int i, x;
    while((fgets(ch, N, stdin))!=NULL)
    {
        x=strlen(ch);
        for(i=0;i<x;i++)
        {
            if(ch[i]=='=' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('#');
            else if(ch[i]=='/' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('\\');
            else if(ch[i]== 39 && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('^');
            else if(ch[i]=='(' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('[');
            else if(ch[i]==')' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar(']');
            else if(ch[i]=='!' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('|');
            else if(ch[i]=='<' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('{');
            else if(ch[i]=='>' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('}');
            else if(ch[i]=='-' && ch[i-1]=='?' && ch[i-2]=='?')
                putchar('~');
            else if(ch[i]=='?')
                continue;
            else
                putchar(ch[i]);
        }
        putchar('\n');
    }

    return 0;
}
