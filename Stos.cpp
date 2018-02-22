#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int liczba, stos[10], i=0;
    char ch;

    while((scanf("%c", &ch))!=EOF)
    {
        switch(ch)
        {
        case '+':
                scanf("%d", &liczba);
                if(i>=0 && i<10){
                    i++;
                    stos[i-1]=liczba;
                    printf(":)\n");
                }
                else printf(":(\n");
            break;
        case '-':
                if(i>0 && i<=10){
                    i--;
                    printf("%d\n", stos[i]);
                }
                else printf(":(\n");
            break;
        }
    }

    return 0;
}
