#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct punkt
{
    char nazwa[10];
    int x;
    int y;
};

int main()
{
    int t, n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        punkt *t1 = new punkt[n];
        int *t2 = new int[n];
        for(int j=0;j<n;j++)
        {
            scanf("%s %d %d", t1[j].nazwa, &t1[j].x, &t1[j].y);
            t2[j]=(t1[j].x*t1[j].x)+(t1[j].y*t1[j].y);
        }

        sort(t2, t2+n);

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(t2[j]==(t1[k].x*t1[k].x)+(t1[k].y*t1[k].y))
                {
                    cout<<t1[k].nazwa<<" "<<t1[k].x<<" "<<t1[k].y<<endl;
                    break;
                }
            }
        }

        delete [] t1;
        delete [] t2;
        
        putchar('\n');
    }

    return 0;
}
