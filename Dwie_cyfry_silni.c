#include <stdio.h>

int main()
{
    int t, i, n;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        switch(n)
        {
        case 0:
            puts("0 1");
            break;
        case 1:
            puts("0 1");
            break;
        case 2:
            puts("0 2");
            break;
        case 3:
            puts("0 6");
            break;
        case 4:
            puts("2 4");
            break;
        case 5:
            puts("2 0");
            break;
        case 6:
            puts("2 0");
            break;
        case 7:
            puts("4 0");
            break;
        case 8:
            puts("2 0");
            break;
        case 9:
            puts("8 0");
            break;
        default:
            puts("0 0");
            break;
        }
    }
    return 0;
}
