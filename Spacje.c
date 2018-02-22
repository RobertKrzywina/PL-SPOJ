#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 50

int main()
{
    int i, j=0, x;
    char ch[SIZE];
    while((fgets(ch, SIZE, stdin))!=NULL)
    {
        x=strlen(ch);
        for(i=0;i<x;i++)
        {
            if(ch[i]==' ') j++;
            else if(ch[i]=='\n') putchar(ch[i]);
            else if(j>=1){
                putchar(toupper(ch[i]));
                j=0;
            }
            else putchar(ch[i]);
        }
    }

    return 0;
}
