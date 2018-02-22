#include <stdio.h>

int main()
{
    int t, i, a, b, x, y;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &a, &b);
        if(10<=a && b<=30){
        x=a; y=b;
            while(a!=b){
                if(a>b) b+=y;
                else a+=x;
            }
        printf("%d\n", a);
        }
    }
    return 0;
}
