#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if((c-b)!=0 && a==0) printf("BR");
    else if (a==0 && (c-b)==0) printf("NWR");
    else printf("%.2f", 100*(c-b)/a/100);

    return 0;
}
