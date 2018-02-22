#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int d, l, c;
    scanf("%d", &d);
    for(int i=0;i<d;i++)
    {
        scanf("%d %d", &l, &c);
        if(l==1) puts("TAK");
        else if(l>1){
            if((c%(l-1))==0) puts("NIE");
            else puts("TAK");
        }
    }

    return 0;
}
