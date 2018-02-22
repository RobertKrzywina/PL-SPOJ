#include <stdio.h>
#include <string.h>

int main()
{
    char wyraz[25];
    int i, x, suma=0;
    scanf("%s", wyraz);
    x=strlen(wyraz);
    for(i=0;i<x;i++)
    {
        switch(wyraz[i])
        {
        case 'a':
            {
                suma+=1;
                break;
            }
        case 'b':
            {
                suma+=2;
                break;
            }
        case 'c':
            {
                suma+=3;
                break;
            }
        case 'd':
            {
                suma+=4;
                break;
            }
        case 'e':
            {
                suma+=5;
                break;
            }
        case 'f':
            {
                suma+=6;
                break;
            }
        case 'g':
            {
                suma+=7;
                break;
            }
        case 'h':
            {
                suma+=8;
                break;
            }
        case 'i':
            {
                suma+=9;
                break;
            }
        case 'k':
            {
                suma+=10;
                break;
            }
        case 'l':
            {
                suma+=20;
                break;
            }
        case 'm':
            {
                suma+=30;
                break;
            }
        case 'n':
            {
                suma+=40;
                break;
            }
        case 'o':
            {
                suma+=50;
                break;
            }
        case 'p':
            {
                suma+=60;
                break;
            }
        case 'q':
            {
                suma+=70;
                break;
            }
        case 'r':
            {
                suma+=80;
                break;
            }
        case 's':
            {
                suma+=90;
                break;
            }
        case 't':
            {
                suma+=100;
                break;
            }
        case 'v':
            {
                suma+=200;
                break;
            }
        case 'x':
            {
                suma+=300;
                break;
            }
        case 'y':
            {
                suma+=400;
                break;
            }
        case 'z':
            {
                suma+=500;
                break;
            }
        }
    }
    printf("%d", suma);

    return 0;
}
