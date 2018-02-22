#include <stdio.h>
#define PI 3.141592654

int main()
{
    double d, r, wynik=0;
    scanf("%lf %lf", &d, &r);
    wynik=(d*d-((r*r)/4.0));
    printf("%.2lf", wynik*PI);

    return 0;
}
