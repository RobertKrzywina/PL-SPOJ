#include <stdio.h>

int main()
{
    float a, b, c;
    while((scanf("%f %f %f", &a, &b, &c))!=EOF){
        if(a+b>c && a+c>b && b+c>a) puts("1");
        else puts("0");
    }
    return 0;
}
