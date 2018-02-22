#include <stdio.h>
#include <ctype.h>
#define SIZE 999

int main()
{
    int i, x;
    char ch[SIZE]={};
    while((scanf("%s", ch))!=EOF){
        x=strlen(ch);
        for(i=x;i>0;i--)
            printf("%c", tolower(ch[i-1]));
        putchar('\n');
        }
    return 0;
}
