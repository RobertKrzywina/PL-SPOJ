#include <stdio.h>

int main()
{
    float a, b, c, delta;
    while((scanf("%f %f %f", &a, &b, &c))!=EOF){
    if(a!=0){
        delta=(b*b)-(4*a*c);
        if(delta<0) puts("0");
        else if(delta==0) puts("1");
        else puts("2");
        }
    }

    return 0;
}
