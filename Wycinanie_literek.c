#include <stdio.h>
#include <string.h>
#define SIZE 100
 
int main()
{
    int i, x;
    char ch, wyraz[SIZE];
    while((scanf("%c", &ch))!=EOF)
    {
        scanf("%s", wyraz);
        x=strlen(wyraz);
        for(i=0;i<x;i++)
        {
            if(ch==wyraz[i]) continue;
            else putchar(wyraz[i]);
        }
        putchar('\n');
        getchar();
    }
 
    return 0;
}
