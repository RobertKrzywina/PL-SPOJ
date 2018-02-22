#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
    char ch[SIZE];
    int i=0, licz=0;
    while(fgets(ch, SIZE, stdin)){
        for(i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='\n') licz++;
        }
    }
    printf("%d", licz+1);

    return 0;
}
