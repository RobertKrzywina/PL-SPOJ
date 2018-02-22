#include <stdio.h>
#define SIZE 2000

int main()
{
    int t, i, j, x;
    char ch[SIZE];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", ch);
        x=strlen(ch)/2;
        for(j=0;j<x;j++)
            printf("%c", ch[j]);
        printf("\n");
    }

    return 0;
}
