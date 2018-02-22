#include <stdio.h>

int main()
{
    int t, i;
    unsigned int a, b;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &a, &b);
        while(a!=b){
            if(a<b) b-=a;
            else a-=b;
        }
        printf("%d\n", a+b);
    }

    return 0;
}
