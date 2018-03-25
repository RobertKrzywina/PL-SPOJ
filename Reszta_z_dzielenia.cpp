#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, a, b, k, r;

    cin>>d;
    while(d--)
    {
        cin>>a>>b;
        b=abs(b); r=a%b; k=1;
        while(r<0)
        {
            r=b*k+a;
            k++;
        }
        cout<<r<<endl;
    }

    return 0;
}
