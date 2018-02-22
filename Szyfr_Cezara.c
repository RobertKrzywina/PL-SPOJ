#include <stdio.h>
#include <string.h>
#define SIZE 200

int main()
{
    int i, x;
    char ch[SIZE];
    while((scanf("%s", ch))!=EOF)
    {
        x=strlen(ch);
        for(i=0;i<x;i++)
        {
            if(ch[i]==' ')       putchar(' ');
            else if(ch[i]=='X')  putchar('A');
            else if(ch[i]=='Y')  putchar('B');
            else if(ch[i]=='Z')  putchar('C');
            else                 putchar(ch[i]+3);
        }
        putchar('\n');
    }

    return 0;
}
