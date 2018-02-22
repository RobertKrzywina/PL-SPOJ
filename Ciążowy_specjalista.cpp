#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int d, x, y, z;
    scanf("%d", &d);
    for(int i=0;i<d;i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(x>0 && y>0 && z>1 && z<1001) printf("%.0f\n", (z*y-(x+y))/(z-1.0)*12.0);
    }

    return 0;
}
