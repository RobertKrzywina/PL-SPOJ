#include <stdio.h>

int main()
{
    int a, b, c, pot_a, pot_b, pot_c, warunek;
    while((scanf("%d %d %d", &a, &b, &c))!=EOF)
    {
        pot_a=a*a;
        pot_b=b*b;
        pot_c=c*c;
        warunek=(a+b>c && a+c>b && b+c>a);
        if(!warunek) puts("brak");
        else if(pot_c>pot_a+pot_b || pot_a>pot_b+pot_c || pot_b>pot_a+pot_c) puts("rozwartokatny");
        else if(pot_c==pot_a+pot_b || pot_a==pot_b+pot_c || pot_b==pot_a+pot_c) puts("prostokatny");
        else if(pot_c<pot_a+pot_b || pot_a<pot_b+pot_c || pot_b<pot_a+pot_c) puts("ostrokatny");
    }

    return 0;
}
